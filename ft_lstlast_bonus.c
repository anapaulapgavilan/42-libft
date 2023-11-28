/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:16:54 by ana-pper          #+#    #+#             */
/*   Updated: 2023/10/14 14:37:23 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

/*
int main() 
{
    t_list *node1 = ft_lstnew("Nodo 1");
    t_list *node2 = ft_lstnew("Nodo 2");
    t_list *node3 = ft_lstnew("Nodo 3");

	node1 -> next = node2;
	node2 -> next = node3;
	node3 -> next = NULL;

	t_list	*last = ft_lstlast(node1);
	
	printf("Last: %s\n", (char *)last -> content);
	
    return (0);
}
*/