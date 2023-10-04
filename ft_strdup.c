/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:58:49 by ana-pper          #+#    #+#             */
/*   Updated: 2023/09/27 11:50:07 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(const char *s1)
{
	char		*new;
	char		*byte_new;
	int			i;
	int			j;

	j = ft_strlen(s1);
	new = malloc(sizeof(*new) * (j + 1));
	byte_new = (char *)new;
	i = 0;
	if (!byte_new)
		return (NULL);
	else
	{
		while (i < j)
		{
			byte_new[i] = s1[i];
				i++;
		}
		byte_new[i] = '\0';
	}
	return (byte_new);
}

/*	
int main (void)
{
	char s1[14] = "Hello, world!";

	printf("Mi resultado: %s\n", ft_strdup(s1));
	printf("Resultado función: %s\n", strdup(s1));
	return(0);
}
*/