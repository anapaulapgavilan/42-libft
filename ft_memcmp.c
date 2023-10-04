/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:22:46 by ana-pper          #+#    #+#             */
/*   Updated: 2023/09/19 11:46:08 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1ptr;
	unsigned char	*s2ptr;
	size_t			i;

	s1ptr = (unsigned char *)s1;
	s2ptr = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (*s1ptr != *s2ptr)
		{
			return (*s1ptr - *s2ptr);
		}
		s1ptr++;
		s2ptr++;
		i++;
	}
	return (0);
}

/*
int main(void)
{
    const char s1[] = "Hello, world!";
    const char s2[] = "World";
    int result1 = ft_memcmp(s1, s2, 1);
    int result2 = memcmp(s1, s2, 1);
    printf("Result (ft_memcmp): %d\n", result1);
    printf("Result (memcmp): %d\n", result2);
    
    return 0;
}
*/