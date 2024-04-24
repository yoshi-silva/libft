/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorocha- <yorocha-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:34:10 by yorocha-          #+#    #+#             */
/*   Updated: 2024/04/24 14:18:56 by yorocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// // this funciton just adds a kinda random pattern to the string
// // it is just an example of a function that could be passed to ft_strmapi
// // in the real world,you pass your own functions
// char function_name(unsigned int i, char c)
// {
//     return (c+1);
// }

/**
* @brief
this function takes an const string and a function pointer
and applies the function to each character of the string
(and not the whole string at once)
* @param s The string to iterate over
* @param f The function to apply to each character
notice how the function is passed as a pointer and not called
we will call it later,and we will pass the arguments ONLY then
* @return a new string created from the result of the function
* applied to each character of the string
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*duped;
	unsigned int	i;

	duped = ft_strdup(s);
	if (!(duped))
		return (NULL);
	i = 0;
	while (duped[i])
	{
		duped[i] = (*f)(i, duped[i]);
		i++;
	}
	return (duped);
}

// int main(void)
// {
//     int i = 0;
//     const char *str = "abcdef";
//     printf("str:%s\n",str);
//     // notice how the function_name is passed as an argument
//     // and it does not have the () at the end
//     // that is because it is a function pointer
//     // and it is not being called, it is being passed.
//     // that way i dont need to pass arguments to the function
//     // I'll pass arguments later when i CALL it
//     // passing is different from calling
//     printf("%s",ft_strmapi(str,function_name));
//     return (0);
// }