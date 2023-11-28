/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:19:56 by ana-pper          #+#    #+#             */
/*   Updated: 2023/10/12 15:35:22 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = (t_list *)malloc(sizeof (*ptr));
	if (!(ptr))
		return (NULL);
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
}

/*
int main() 
{
    char *content = "Ejemplo de contenido";
    t_list *NewNode = ft_lstnew(content);

    if (NewNode != NULL) {
        printf("Contenido del nuevo nodo: %s\n", (char *)NewNode->content);
    } else {
        printf("Error al crear el nodo.\n");
    }
    return 0;
}
*/