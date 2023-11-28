/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:27:14 by ana-pper          #+#    #+#             */
/*   Updated: 2023/10/15 11:13:42 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	if (!f)
		return ;
	temp = lst;
	while (temp)
	{
		f(temp->content);
		temp = temp -> next;
	}
}

/*
void todo(void *ptr) {
	printf("%p\n", ptr);
}

int main() 
{
    t_list *node1 = ft_lstnew("Nodo 1");
    t_list *node2 = ft_lstnew("Nodo 2");
    t_list *node3 = ft_lstnew("Nodo 3");

	node1 -> next = node2;
	node2 -> next = node3;
	node3 -> next = NULL;

	ft_lstiter(node1, todo);

    return (0);
}
*/