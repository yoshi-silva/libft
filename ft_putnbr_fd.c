/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorocha- <yorocha-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 19:17:26 by yorocha-          #+#    #+#             */
/*   Updated: 2024/04/24 17:19:48 by yorocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

// int main (void)
// {
// 	ft_putnbr_fd(42, 1);
// 	ft_putendl_fd("", 1);
// 	ft_putnbr_fd(-42, 1);
// 	ft_putendl_fd("", 1);
// 	ft_putnbr_fd(0, 1);
// 	ft_putendl_fd("", 1);
// 	ft_putnbr_fd(2147483647, 1);
// 	ft_putendl_fd("", 1);
// 	ft_putnbr_fd(-2147483648, 1);
// 	ft_putendl_fd("", 1);
// 	return (0);
// }
