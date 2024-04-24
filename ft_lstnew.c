/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorocha- <yorocha-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:53:59 by yorocha-          #+#    #+#             */
/*   Updated: 2024/04/24 19:19:34 by yorocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//apparently we can just fetch the size of the list
//that is,the size of it,s content and some extra padding i believe
//step 1,create a list of the type T (which is a Simple list)
//step 2, put it in a nice comfy adress so i can change it,s content
//step 3,give it content,in this case its just the same content as before 
//remembering that structs of the type t_list,are waiting for content and 
//a pointer to the next struct (there is none)
//acessing the content of a struct with pointers is done by using arrows
//instead of dots
t_list *ft_lstnew(void *content)
[
	t_list *newlist;

	newlist = (t_list *)malloc(sizeof(t_list))
	if (!newlist)
		return(NULL);
	newlist -> content = content;
	newlist -> next = NULL;
	return (newlist);
]


int main (void)
{
	char * text = "wawa";

	ft_lstnew(text);

	printf("%s", newlist -> content);

}

// typedef struct s_list
// {
// void *content;
// struct s_list *next;
// } t_list;