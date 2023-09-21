/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:33:54 by ana-pper          #+#    #+#             */
/*   Updated: 2023/09/17 18:03:49 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t count)
{
	unsigned char	*strptr;
	size_t			i;

	strptr = (unsigned char *)ptr;
	i = 0;
	while (i < count)
	{
		strptr[i] = value;
		i++;
	}
	return (ptr);
}

/*
int main(void) 
{
    char str[] = "Hello, world!";

    printf("Original: %s\n", str);
	
	printf("Modificado: %s\n", ft_memset(str, 'A', 5));

    return 0;
}
*/