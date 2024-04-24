/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorocha- <yorocha-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 23:20:19 by yorocha-          #+#    #+#             */
/*   Updated: 2024/04/21 21:40:46 by yorocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_temp;

	s_temp = (unsigned char *)s;
	while (n--)
	{
		if (*s_temp == (unsigned char)c)
			return (s_temp);
		s_temp++;
	}
	return (NULL);
}
