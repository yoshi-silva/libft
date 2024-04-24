/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorocha- <yorocha-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 17:51:13 by yorocha-          #+#    #+#             */
/*   Updated: 2024/04/24 17:13:31 by yorocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief same as ft_putstr_fd but with a newline at the end
/// @param s the string to print
/// @param fd  the file descriptor
/// 0 is standard input, 1 is standard output
/// @return nothing
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

// int main (void)
// {
// 	ft_putendl_fd("Hello, World!", 1);
// 	ft_putendl_fd("im down here!", 1);

// 	return (0);
// }