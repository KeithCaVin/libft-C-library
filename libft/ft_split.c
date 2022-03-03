/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvinarao <kvinarao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:18:26 by kvinarao          #+#    #+#             */
/*   Updated: 2022/03/03 11:34:57 by kvinarao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(char const *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

char	*write_split(char const *s, int start, int len)
{
	char	*str;
	int		count;

	count = 0;
	str = malloc(sizeof(char) * (len - start + 1));
	while (start < len)
	{
		str[count] = s[start];
		count++;
		start++;
	}
	str[count] = '\0';
	return (str);
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
	result = malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (++x <= ft_strlen(s))
	{
		if (s[x] != c && start < 0)
			start = x;
		else if ((s[x] == c || x == ft_strlen(s)) && start >= 0)
		{
			result[y++] = write_split(s, start, x);
			start = -1;
		}
	}
	result[y] = 0;
	return (result);
}
