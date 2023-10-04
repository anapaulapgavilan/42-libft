/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 09:36:24 by ana-pper          #+#    #+#             */
/*   Updated: 2023/09/19 11:20:58 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*strptr;
	unsigned char	chr;

	strptr = (unsigned char *)str;
	chr = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*strptr == chr)
		{
			return ((void *)strptr);
		}
		strptr++;
		i++;
	}
	return ((void *)0);
}

/*
int main(void)
{
	const char str[] = "World";
	char *ptr = ft_memchr(str, 'z', sizeof(str));
	char *ptr1 = memchr(str, 'z', sizeof(str));
	printf("Result: %s\n", ptr);
	printf("Result: %s\n", ptr1);
	
	return(0);
}
*/