/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorocha- <yorocha-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 17:40:12 by yorocha-          #+#    #+#             */
/*   Updated: 2024/04/24 15:29:34 by yorocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief same as ft_putchar but with a file descriptor.
/// otherwise just use write(fd, &c, 1);
/// @param c the character to print
/// @param fd the file descriptor
/// 0 is standard input, 1 is standard output
/// @return nothing
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
