/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:25:54 by ana-pper          #+#    #+#             */
/*   Updated: 2023/10/15 11:16:02 by ana-pper         ###   ########.fr       */
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
	if (needle[0] == '\0')
	{
		return ((char *)haystack);
	}
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[j])
		{
			while ((haystack[i + j] == needle[j]) && (i + j < len))
			{
				if (needle[j + 1] == '\0')
					return ((char *)(haystack + i));
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
//    char *s1 = "oh no not the empty string !";
// 	char *s2 = "";
// 	size_t max = strlen(s1);
// 	char *i1 = strnstr(s1, s2, max);
// 	char *i2 = ft_strnstr(s1, s2, max);

// 	printf("%s\n", i1);
// 	printf("%s\n", i2);

// 	if (i1 == i2)
// 		printf("BIEN");
// 	else
// 		printf("MAL");
//     return 0;
// }
