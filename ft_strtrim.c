/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:13:02 by ana-pper          #+#    #+#             */
/*   Updated: 2023/10/03 12:21:56 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	if (end)
		end--;
	while (s1[end] && ft_strchr(set, s1[end]))
		end--;
	len = end - start;
	return (ft_substr (s1, start, len + 1));
}

/*
int main() 
{
    char s1[] = "   Hello, World!   ";
    char set[] = " ";

    char *trimmed = ft_strtrim(s1, set);
    if (trimmed != NULL) 
	{
        printf("Cadena original: \"%s\"\n", s1);
        printf("Cadena recortada: \"%s\"\n", trimmed);
        free(ft_strtrim(s1, set));
    } else 
	{
        printf("Error de asignación de memoria.\n");
    }

    return 0;
}
*/