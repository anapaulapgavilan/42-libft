/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:40:48 by ana-pper          #+#    #+#             */
/*   Updated: 2023/09/17 18:02:29 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *source, size_t len)
{
	char	*destptr;
	char	*srcptr;
	size_t	i;

	if (!dest && !source)
		return (NULL);
	destptr = (char *)dest;
	srcptr = (char *)source;
	i = 0;
	if (destptr > srcptr)
		while (len--)
			destptr[len] = srcptr[len];
	else
	{	
		while (len--)
		{
			destptr[i] = srcptr[i];
			i++;
		}
	}
	return (destptr);
}

/*
int main() 
{
    char 	source[] = "Alabama";
	char	destination[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    size_t len = 4;

    ft_memmove(destination, source, len);

    printf("Copied String using ft_memmove: %s\n", destination);

    return 0;
}
*/