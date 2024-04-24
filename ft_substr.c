/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorocha- <yorocha-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 00:01:38 by yorocha-          #+#    #+#             */
/*   Updated: 2024/04/24 16:32:29 by yorocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Allocates (with malloc(3)) and returns a substring
///from the string ’s’.
///The substring begins at index ’start’ and is of
///maximum size ’len’.
/// @param s The string from which to create the substring.
/// @param start  The start index of the substring in the
///string ’s’.
/// @param len The maximum length of the substring.
/// @return The substring.
/// NULL if the allocation fails
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (start >= ft_strlen(s))
		str = (char *)malloc(1);
	else if (len >= ft_strlen(s))
		str = (char *)malloc(ft_strlen(s) - start + 1);
	else
		str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
			str[j++] = s[i];
		i++;
	}
	str[j] = 0;
	return (str);
}
