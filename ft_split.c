/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorocha- <yorocha-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 02:31:01 by yorocha-          #+#    #+#             */
/*   Updated: 2024/04/24 18:51:11 by yorocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Allocates (with malloc(3)) and returns an array
///of strings obtained by splitting ’s’ using the
///character ’c’ as a delimiter. The array must end
///with a NULL pointer.
/// @param s The string to be split.
/// @param c The delimiter character
/// @return The array of new strings resulting from the split.
///NULL if the allocation fails.
/* version 1, doesn't free */


/// @brief counts how many strings,first it checks if its letter
/// then checks if its end of string,if not, n++;
///then keeps pushing till it finds next letter 
/// @return word count.delimited
static int	string_count(char const *s, char c)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		while (s[i] != '\0' && !(s[i] == c))
			i++;
		if (s[i])
			n++;
		while (s[i] != '\0' && (s[i] == c))
			i++;
	}
	return (n);
}

static size_t	string_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static char	*mallocate_string(char const *s, char c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc((sizeof(char) * string_len(s, c)) + 1);
	if (!str)
		return (NULL);
	while (s[i] != '\0' && (s[i] != c))
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**list;
	size_t	strings;
	size_t	i_list;

	i_list = 0;
	strings = string_count(s, c);
	list = (char **)malloc((strings + 1) * sizeof(char *));
	if (!list)
		return (NULL);
	list[strings] = NULL;
	while (*s)
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0')
		{
			list[i_list] = mallocate_string (s, c);
			if (!mallocate_string (s, c))
				return(NULL);
			i_list++;
		}
		while (*s != '\0' && (*s == c))
			s++;
	}
	return (list);
}

// free list and all the individual strings
// by this order: strigns first,list last

int	main(void)
{
	char *wawa= "start-yeyeye-----waawa-----wawe-5-end";
	char space= '-';
	// int i = 0;
	char **new = ft_split(wawa,space);
	printf("%s 0\n%s 1\n%s 2\n%s 3\n%s 4\n%s 5\n %s 6\n"
, new[0],new [1],new[2],new[3],new[4],new[5],new[6]);
	return (0);
}