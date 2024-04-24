/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorocha- <yorocha-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 23:28:51 by yorocha-          #+#    #+#             */
/*   Updated: 2024/04/21 21:42:28 by yorocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*temp;
	size_t			i;

	i = 0;
	temp = (unsigned char *)s;
	while (temp[i])
	{
		if (temp[i] == (unsigned char)c)
			return ((char *)temp + i);
		i++;
	}
	if (temp[i] == (unsigned char)c)
		return ((char *)temp + i);
	return (NULL);
}
