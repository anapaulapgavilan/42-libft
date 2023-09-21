/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:03:52 by ana-pper          #+#    #+#             */
/*   Updated: 2023/09/16 16:50:36 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	if ((c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}

/*
int main(void)
{
    char c;
    c = '!';
    printf("Result1: %d\n", ft_isalpha(c));

    c = '0';
    printf("Result2: %d\n", ft_isalpha(c));

    c='q';
    printf("Result3: %d\n", ft_isalpha(c));

    return 0;
}
*/