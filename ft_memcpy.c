/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:39:36 by ana-pper          #+#    #+#             */
/*   Updated: 2023/09/17 13:36:14 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t n)
{
	char	*destptr;
	char	*srcptr;
	size_t	i;

	destptr = (char *)dest;
	srcptr = (char *)source;
	if (!dest && !source)
	{
		return (NULL);
	}
	i = 0;
	while (i < n)
	{
		destptr[i] = srcptr[i];
		i++;
	}
	return (destptr);
}

/*
int main(void) 
{
    char source[15] = "Hello, world!";
	char dest[0];
	size_t n = strlen(source) + 1;

    printf("Dest: %s\n", ft_memcpy(dest, source, n));

    return 0;
}
*/