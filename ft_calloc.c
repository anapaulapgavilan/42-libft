/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:35:45 by ana-pper          #+#    #+#             */
/*   Updated: 2023/10/10 12:40:09 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	n;
	void	*ptr;

	n = count * size;
	ptr = malloc(n);
	if (ptr != NULL)
		ft_memset(ptr, 0, n);
	return (ptr);
}

/*
int main(void)
{
    int size = 8539;
 
    void * d1 = ft_calloc(size, sizeof(int));
    void * d2 = calloc(size, sizeof(int));
    if (memcmp(d1, d2, size * sizeof(int)))
            exit(printf("Failed"));
    free(d1);
    free(d2);
    exit(printf("Success"));
}
*/