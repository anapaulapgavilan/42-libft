/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:25:54 by ana-pper          #+#    #+#             */
/*   Updated: 2023/09/21 12:27:57 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (len == 0 || needle[j] == '\0')
		return ((char *)(haystack));
	while (haystack[i] != '\0' && i < len)
	{
		while ((haystack[i + j] == needle[j] && i + j < len))
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *)(haystack + i));
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

/*
int main()
{
    char *src = "hello there";
    char *search = "lo there";
    
    char *result_ft_strnstr = ft_strnstr(src, search, sizeof(src));
    char *result_strnstr = strnstr(src, search, sizeof(src));
    
    printf("Result using ft_strrchr: %s\n", result_ft_strnstr);
    printf("Result using strnstr: %s\n", result_strnstr);
    
    return 0;
}
*/