/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorocha- <yorocha-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 17:47:20 by yorocha-          #+#    #+#             */
/*   Updated: 2024/04/24 17:25:04 by yorocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_putstr_fd(char *s, int fd)
// {
// 	write(fd, s, ft_strlen(s));
// } accidentally used strlen,i think its illegal af

/// @brief same as ft_putstr but with a file descriptor.
/// otherwise just use write(fd, s, ft_strlen(s));
/// @param s the string to print
/// @param fd the file descriptor
/// 0 is standard input, 1 is standard output
/// @return nothing
void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}
