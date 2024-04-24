/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorocha- <yorocha-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:56:57 by yorocha-          #+#    #+#             */
/*   Updated: 2024/04/24 17:07:16 by yorocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// just makes it big if it can
// void oneup(unsigned int i, char *c)
// {
//     c[i] = ft_toupper(c[i]);
// }

/**
 *  @brief this function iterates each character of a string
and applies a function to it.

	since the string is passed as a pointer, it is modified
in place
	@param s the string to iterate over
	@param f the function to apply to each character.
	note that the function takes two arguments
	the index of the character and the character itself
	similiar to "strmapi.c"
	@return nothing 
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// int main(void)
// {
//     char str[] = "AbCdEf";
//     printf("str:%s",str);
//     printf("\n");
//     ft_striteri(str,oneup);
//     printf("%s\n",str);
//     return (0);
// }