/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:18:52 by ana-pper          #+#    #+#             */
/*   Updated: 2023/09/21 10:27:58 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	x;

	x = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while ((i != 0) && (s[i] != x))
	{
		i--;
	}
	if (s[i] == x)
	{
		return ((char *)(s + i));
	}
	return ((char *)(NULL));
}

/*
int main(void)
{
	char str[] = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	char c = '\0';

	printf("Resultado: %p\n", ft_strrchr(str, c));
	printf("Resultado strchr: %p\n", strrchr(str, c));
	return (0);
}
*/