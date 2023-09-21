/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:17:55 by ana-pper          #+#    #+#             */
/*   Updated: 2023/09/16 16:53:21 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
	{
		return (1);
	}
	return (0);
}

/*
int main(void)
{
    char c;
    c = ' ';
    printf("Result1: %d\n", ft_isascii(c));

    c = '~';
    printf("Result2: %d\n", ft_isascii(c));

    c ='A';
    printf("Result3: %d\n", ft_isascii(c));

    return 0;
}
*/