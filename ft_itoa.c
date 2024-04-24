/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorocha- <yorocha-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 05:47:04 by yorocha-          #+#    #+#             */
/*   Updated: 2024/04/24 15:29:12 by yorocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int		i;
	long	nbr;

	i = 0;
	nbr = (long int)n;
	if (!n)
		return (1);
	if (nbr < 0)
	{
		i++;
		nbr *= -1;
	}
	while (nbr > 0)
	{
		i++;
		nbr /= 10;
	}
	return (i);
}
//on line 47. ever gonna zero?

char	*ft_itoa(int n)
{
	char		*str;
	int			size;
	long int	nbr;

	nbr = (long int)n;
	size = count_digits(nbr);
	str = (char *)malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	str[size] = '\0';
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		str[size - 1] = (nbr % 10) + '0';
		nbr /= 10;
		size--;
	}
	return (str);
}

// int main (void)
// {
//     printf("%s\n",ft_itoa(123));
//     return(0);
// }