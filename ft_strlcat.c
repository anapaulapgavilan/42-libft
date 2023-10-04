/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 09:17:43 by ana-pper          #+#    #+#             */
/*   Updated: 2023/09/26 10:07:20 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	i;
	size_t	lensrc;

	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < dstsize)
		i++;
	while (src[j] != '\0' && (j + i + 1) < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < dstsize)
		dst[i + j] = '\0';
	lensrc = 0;
	while (src[lensrc] != '\0')
		lensrc++;
	return (i + lensrc);
}

/*
int main(void)
{
    char dest[20] = "";
    const char src[10] = "world!";
  	size_t size = 20;

    size_t result = ft_strlcat(dest, src, size);
    printf("Longitud final: %zu\n", result);
    return(0);
}
*/