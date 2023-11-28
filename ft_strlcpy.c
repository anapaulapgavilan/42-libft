/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:22:45 by ana-pper          #+#    #+#             */
/*   Updated: 2023/10/07 16:48:22 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	j;
	size_t	i;

	i = 0;
	j = 0;
	while (src[j])
	{
		j++;
	}
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (j);
}

/*
int main(void) 
{
    char src[] = "lorem ipsum";
    char dest[13];
	size_t size = 3;
	size_t length;
	size_t length1;

	length = ft_strlcpy(dest, src, size);
	length1 = strlcpy(dest, src, size);

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
    printf("Length: %zu\n", length);
	printf("Length1: %zu\n", length1);
    return 0;
}
*/