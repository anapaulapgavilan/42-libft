/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:31:18 by ana-pper          #+#    #+#             */
/*   Updated: 2023/09/16 16:56:07 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
	{
		return (1);
	}
	return (0);
}

/*
int main(void)
{
    char c;
    c = 'A';
    printf("Result1: %d\n", ft_isprint(c));

    c = ' ';
    printf("Result2: %d\n", ft_isprint(c));

    c ='\0';
    printf("Result3: %d\n", ft_isprint(c));

    return 0;
}
*/
