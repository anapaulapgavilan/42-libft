/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:32:57 by ana-pper          #+#    #+#             */
/*   Updated: 2023/10/04 10:15:07 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	size_t			j;
	size_t			n;
	char			*byte_ptr;

	n = ft_strlen(s);
	if (len > n)
		len = n;
	byte_ptr = (char *)malloc((len + 1) * sizeof(char));
	if (byte_ptr == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			byte_ptr[j] = s[i];
			j++;
		}
		i++;
	}
	byte_ptr[j] = 0;
	return (byte_ptr);
}

/*
int main()
{
	char s[] = "Hello, world!";
	unsigned int start = 6;
	size_t len = 20;

	printf("Resultado: %s\n", ft_substr(s, start, len));
	free(ft_substr(s, start, len));
	return(0);
}
*/