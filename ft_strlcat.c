/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorocha- <yorocha-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 23:30:19 by yorocha-          #+#    #+#             */
/*   Updated: 2024/04/21 21:33:49 by yorocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_size;
	size_t	dst_size;

	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);
	if (dst_size >= size)
		dst_size = size;
	if (dst_size == size)
		return (src_size + size);
	if (size >= dst_size + src_size)
	{
		ft_memcpy(dst + dst_size, src, src_size + 1);
	}
	else
	{
		ft_memcpy(dst + dst_size, src, size - dst_size - 1);
	}
	dst[size - 1] = '\0';
	return (dst_size + src_size);
}

// int main(void)
// {
// 	char dst[100] = "Hello";
// 	char src[100] = "World";
// 	size_t size = 10;
// 	printf("ft_strlcat: %lu\n", ft_strlcat(dst, src, size));
// 	printf("dst: %s\n", dst);
// 	printf("src: %s\n", src);
// 	printf("size: %lu\n", size);
// 	return 0;
// }