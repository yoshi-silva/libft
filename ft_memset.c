/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorocha- <yorocha-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 21:02:26 by yorocha-          #+#    #+#             */
/*   Updated: 2024/04/21 21:20:27 by yorocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/// @brief sets n bytes of s to c. similiar to bzero but more useful.
/// for example, sets the first 2 bytes of the
/// string "wawa" to become 'K'.
/// @param s the string to modify(?) or other
/// @param c the character to set (?) or int
/// @param n the number of bytes to set
/// @return nothing
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s_temp;

	s_temp = (unsigned char *)s;
	while (n--)
		*(s_temp + n) = (unsigned char)c;
	return (s);
}
