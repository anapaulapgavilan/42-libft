/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:20:21 by ana-pper          #+#    #+#             */
/*   Updated: 2023/10/15 11:18:20 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*lstnew;

	if (!lst || !f || !del)
		return (0);
	lstnew = ft_lstnew(f(lst -> content));
	if (!lstnew)
		return (0);
	ptr = lstnew;
	lst = lst -> next;
	while (lst)
	{
		lstnew->next = ft_lstnew(f(lst -> content));
		if (lstnew -> next == NULL)
		{
			ft_lstclear (&ptr, del);
			return (NULL);
		}
		lstnew = lstnew -> next;
		lst = lst -> next;
	}
	lstnew -> next = NULL;
	return (ptr);
}

/*
void del(void *content)
{
    // Liberar la memoria asignada al contenido.
    free(content);
}

void *todo(void *ptr) 
{
	void* a = "a";
	printf("%p\n", ptr);
	return a;
}

int	main(void)
{
	void *content = "Ejemplo de contenido";
	t_list	*lst = ft_lstnew(content);
	t_list	*result;

	// Agregar más elementos a la lista si es necesario.
	// Por ejemplo:
	// lst->next = ft_lstnew(strdup("World"));

	result = ft_lstmap(lst, &todo, &del);

	// Imprimir la lista resultante.
	t_list	*current = result;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}

	return (0);
}
*/