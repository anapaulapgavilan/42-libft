/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 12:02:36 by ana-pper          #+#    #+#             */
/*   Updated: 2023/10/07 16:43:34 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

static	unsigned int	ft_length(int number)
{
	unsigned int	i;

	i = 0;
	if (number == 0)
		return (1);
	if (number < 0)
		i = i + 1;
	while (number != 0)
	{
		number /= 10;
		i++;
	}
	return (i);
}

char	*ft_strmodif(char *str, int n, int length)
{
	if (n == 0)
		str[0] = '0';
	str[length] = '\0';
	while (n != 0)
	{
		str[length - 1] = (n % 10) + '0';
		n = n / 10;
		length--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	length;

	length = ft_length(n);
	str = (char *)malloc((length + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	if (n == -2147483648)
	{
		ft_strlcpy(str, "-2147483648", 12);
		return (str);
	}
	return (ft_strmodif(str, n, length));
}

/*
int main()
{
	printf("Resultado %s\n", ft_itoa(-1));
	printf("Resultado %s\n", ft_itoa(-0));
	printf("Resultado %s\n", ft_itoa(-2147483648));
	printf("Resultado %s\n", ft_itoa(2147483647));
	return(0);
}
*/