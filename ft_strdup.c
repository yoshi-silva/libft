/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorocha- <yorocha-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 07:46:42 by yorocha-          #+#    #+#             */
/*   Updated: 2024/04/21 16:56:48 by yorocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief this function creates a new string which
 	is the duplication of the string passed as a parameter

* @param str The string to duplicate.
* @return a pointer to the new string OR
 	NULL if the allocation fails
 */
char	*ft_strdup(const char *s)
{
	char	*cloned;

	cloned = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (cloned == NULL)
		return (NULL);
	return (ft_memcpy(cloned, s, ft_strlen(s) + 1));
}
