/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorocha- <yorocha-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 00:53:50 by yorocha-          #+#    #+#             */
/*   Updated: 2024/04/24 16:55:42 by yorocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/// @brief used for ft_strtrim, checks to see if the string contains
/// a character that is in the set, on the edges of the string
///THIS FUNCTION was split into 2! one for the left trim and another for other
/// therefore one is for index 0 and the other for index non zero
/// @param str the string to check
/// @param set the trim set
/// @return if index is zero, then returns the ending index of the left trim
/// but if the index is non zero,then it returns the starting
/// index of the right trim
static	size_t	substr_index_left(const char *str, const char *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (set[j] != str[i])
	{
		j = 0;
		while (set[j] != str[i] && set[j] != '\0')
			j++; 
	}
	while (str[i] && set[j] == str[i])
	{
		i++;
		if (set[j] != str[i])
		{
			j = 0;
			while (set[j] != str[i] && set[j] != '\0')
				j++;
		}
	}
	return (i);
}

static	size_t	substr_index_right(const char *str, const char *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	i = ft_strlen(str) - 1; 
	if (set[j] != str[i])
	{
		j = 0;
		while (set[j] != str[i] && set[j] != '\0')
			j++; 
	}
	while (str[i] && set[j] == str[i])
	{
		i--;
		if (set[j] != str[i])
		{
			j = 0;
			while (set[j] != str[i] && set[j] != '\0')
				j++; 
		}
	}
	return (i);
}

/// @brief Allocates (with malloc(3)) and returns a copy of
///’s1’ with the characters specified in ’set’ removed
///from the beginning and the end of the string. for example:
///"123321123321Lis3bon3333" and the trim set is 312, the 
///output duped string is "Lis3bon"
/// @param s1 the string to be trim
/// @param set what to trim
/// @return trimmed string
///Null if the allocation fails
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstr;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	newstr = ft_substr(s1, substr_index_left(s1, set), 
			(substr_index_right(s1, set) - substr_index_left(s1, set) + 1));
	return (newstr);
}

// int main (void)
// {
// 	char *wawa= "12121teste132229";
// 	char *set= "123";
// 	printf("  %s\n> %s", wawa, ft_strtrim(wawa, set));
// 	return(0);
// }