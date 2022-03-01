/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvinarao <kvinarao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:18:26 by kvinarao          #+#    #+#             */
/*   Updated: 2022/03/01 18:35:05 by kvinarao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(char const *str, char c)
{
	int	x;
	int	res;

	x = 0;
	res = 0;
	while (str[x] != '\0')
	{
		if (str[x] == c)
			x++;
		while (str[x] != c && str[x] != '\0')
		{
			res++;
			x++;
		}
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	size_t	x;
	size_t	y;
	int		start;
	char	**result;

	x = -1;
	y = 0;
	start = -1;
	if (!s)
		return (0);
	result = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!result)
		return (NULL);
	while (++x <= ft_strlen(s))
	{
		if (s[x] != c && start < 0)
			start = x;
		else if ((s[x] == c || x == ft_strlen(s)) && start >= 0)
		{
			result[y++] = ft_substr(s, start, x - start);
			start = -1;
		}
	}
	result[y] = 0;
	return (result);
}
