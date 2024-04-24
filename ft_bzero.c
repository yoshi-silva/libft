/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorocha- <yorocha-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 20:33:59 by yorocha-          #+#    #+#             */
/*   Updated: 2024/04/21 21:20:52 by yorocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"  

/// @brief similiar to ft_memset but sets n bytes to 0 instead
/// of to another value
/// @param s the string to modify(?) or other
/// @param n the amount of bytes to set to 0
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
