/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:27:51 by ana-pper          #+#    #+#             */
/*   Updated: 2023/09/20 09:40:34 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n && n != 0)
	{
		ptr[i] = '\0';
		i++;
	}
}

/*
int main(void)
{
	size_t n = 13;
	char str[] = "Hello, World!";
	ft_bzero(str, n);
	printf("Resultado: %s\n", str);

	bzero(str, n);
	printf("Resultado bzero: %s\n", str);
	return(0);
}
*/