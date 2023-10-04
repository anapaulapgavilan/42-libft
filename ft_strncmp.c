/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:46:35 by ana-pper          #+#    #+#             */
/*   Updated: 2023/09/20 09:12:44 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{	
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char)s1[i] != (unsigned char)s2[i]
				|| s1[i] == 0) || s2[i] == 0)
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char string1[] = "";
    char string2[] = "apple";

    int result = ft_strncmp(string1, string2, 5);
	int result1 = strncmp(string1, string2, 5);
    printf("ft_strmcmp: %d\n",result);
	printf("strmcmp: %d\n",result1);
    return (0);
}
*/