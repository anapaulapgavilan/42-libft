/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:48:51 by ana-pper          #+#    #+#             */
/*   Updated: 2023/10/14 15:06:01 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	if (lst && new)
	{
		while (temp -> next != NULL)
		{
			temp = temp -> next;
		}
		temp -> next = new;
	}
}

/*
int main() 
{
    t_list *list = NULL;

    t_list *node1 = ft_lstnew("Nodo 1");
    t_list *node2 = ft_lstnew("Nodo 2");
    t_list *node3 = ft_lstnew("Nodo 3");

    ft_lstadd_back(&list, node1);
    ft_lstadd_back(&list, node2);
    ft_lstadd_back(&list, node3);

    t_list *current = list;
    while (current) 
	{
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

    return (0);
}
*/