/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorocha- <yorocha-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 23:52:04 by yorocha-          #+#    #+#             */
/*   Updated: 2024/04/21 21:41:22 by yorocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// to do,add doxygen
// please note that at some point i check if one adress
// is bigger than the other
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_temp;
	const unsigned char	*src_temp;
	size_t				i;

	dest_temp = (unsigned char *) dest;
	src_temp = (unsigned char *) src;
	if (!src_temp && !dest_temp)
		return (NULL);
	i = 0;
	if (dest_temp > src_temp)
		while (i++ < n)
			dest_temp[n - i] = src_temp[n - i];
	else
	{
		while (n--)
		{
			dest_temp[i] = src_temp[i];
			i++;
		}
	}
	return (dest);
}
