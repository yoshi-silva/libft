/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorocha- <yorocha-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 22:05:48 by yorocha-          #+#    #+#             */
/*   Updated: 2024/04/24 14:39:56 by yorocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief compares two generic pointers up till n bytes
/// @param s1 const pointer to any data type
/// @param s2 const pointer to any data type
/// @param n bytes to compare
/// @return zero if they both the same up till n bytes
/// a negative or positive number on the first different byte
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (n)
	{
		while (n--)
		{
			if (*(unsigned char *)s1 != *(unsigned char *)s2)
				return (*(unsigned char *)s1 - *(unsigned char *)s2);
			s1++; 
			s2++;
		}
	}
	return (0);
}
