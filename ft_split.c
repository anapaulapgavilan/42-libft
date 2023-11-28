/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:16:59 by ana-pper          #+#    #+#             */
/*   Updated: 2023/10/10 11:00:06 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static char	*ft_stralloc(char const *s, char c)
{
	int		i;
	char	*ptr;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s, i + 1);
	return (ptr);
}

static void	ft_free(char **tab)
{
	char	**pos;

	if (tab == NULL)
		return ;
	pos = tab;
	while (*pos != NULL)
		free(*(pos++));
	free(tab);
}

static char	**ft_allocate_memory(char const *s, char c, int strs_len)
{
	int		i;
	char	**ptr;

	i = 0;
	ptr = ft_calloc(sizeof(char *), (strs_len + 1));
	if (!ptr)
		return (NULL);
	while (i < strs_len)
	{
		while (*s == c)
			s++;
		ptr[i] = ft_stralloc(s, c);
		if (!ptr[i])
		{
			ft_free(ptr);
			return (NULL);
		}
		s += ft_strlen(ptr[i]);
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	int	strs_len;

	if (!s)
		return (NULL);
	strs_len = ft_count_words(s, c);
	if (strs_len == 0)
		return (ft_calloc(1, sizeof(char *)));
	return (ft_allocate_memory(s, c, strs_len));
}
