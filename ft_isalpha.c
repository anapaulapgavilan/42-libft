/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 12:16:49 by ana-pper          #+#    #+#             */
/*   Updated: 2023/09/16 16:52:21 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

/*
int main(void)
{
    char c;
    c = 'Q';
    printf("Result1: %d\n", ft_isalpha(c));

    c = 'q';
    printf("Result2: %d\n", ft_isalpha(c));

    c='+';
    printf("Result3: %d\n", ft_isalpha(c));

    return 0;
}
*/