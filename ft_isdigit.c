/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 12:49:26 by ana-pper          #+#    #+#             */
/*   Updated: 2023/09/16 16:55:06 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

/*
int main(void)
{
    char c;
    c = '9';
    printf("Result1: %d\n", ft_isdigit(c));

    c = '8';
    printf("Result2: %d\n", ft_isdigit(c));

    c='+';
    printf("Result3: %d\n", ft_isdigit(c));

    return 0;
}
*/