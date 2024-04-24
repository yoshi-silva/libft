/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorocha- <yorocha-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:27:00 by yorocha-          #+#    #+#             */
/*   Updated: 2024/04/24 14:15:11 by yorocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*temp;
	size_t			i;

	temp = (unsigned char *)s;
	i = 0;
	while (temp[i])
		i++;
	if (temp[i] == (unsigned char)c)
		return ((char *)temp + i);
	while (i)
	{
		if (temp[i] == (unsigned char)c)
			return ((char *)temp + i);
		i--;
	}
	if (temp[i] == (unsigned char)c)
		return ((char *)temp + i);
	return (NULL);
}
