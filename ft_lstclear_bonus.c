/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:58:54 by ana-pper          #+#    #+#             */
/*   Updated: 2023/10/15 11:12:37 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*temp2;

	temp = *lst;
	temp2 = temp;
	if (!del)
		return ;
	while (temp)
	{
		del(temp->content);
		temp2 = temp;
		temp = temp -> next;
		free(temp2);
	}
	*lst = NULL;
}
