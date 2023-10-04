/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:35:45 by ana-pper          #+#    #+#             */
/*   Updated: 2023/09/27 10:57:05 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	void			*ptr;
	unsigned char	*byte_ptr;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	ptr = malloc(count * size);
	byte_ptr = (unsigned char *)ptr;
	if (ptr == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (i < count * size)
		{
			byte_ptr[i] = '\0';
			i++;
		}
	}
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