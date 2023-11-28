/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:32:57 by ana-pper          #+#    #+#             */
/*   Updated: 2023/10/12 12:10:01 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*byte_ptr;

	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
	{
		byte_ptr = (char *)malloc(1);
		if (byte_ptr != NULL)
			byte_ptr[0] = '\0';
		return (byte_ptr);
	}
	byte_ptr = (char *)malloc((len + 1) * sizeof(char));
	if (byte_ptr == 0)
		return (NULL);
	if (!s)
		return (NULL);
	ft_strlcpy(byte_ptr, &s[start], len + 1);
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