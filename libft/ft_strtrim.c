/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvinarao <kvinarao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 20:11:19 by kvinarao          #+#    #+#             */
/*   Updated: 2022/02/23 17:01:30 by kvinarao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	getfirst(const char *str1, const char *set)
{
	size_t	count;
	size_t	len;

	count = 0;
	len = ft_strlen(str1);
	while (count < len)
	{
		if (ft_strchr(set, str1[count]) == 0)
			break ;
		count++;
	}
	return (count);
}

int	getlast(const char *str1, const char *set)
{
	size_t	count;
	size_t	len;

	count = 0;
	len = ft_strlen(str1);
	while (count < len)
	{
		if (ft_strchr(set, str1[len - count - 1]) == 0)
			break ;
		count++;
	}
	return (len - count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		len;
	char	*trimmedstr;

	start = getfirst(s1, set);
	len = getlast(s1, set);
	if (len <= start)
		return (trimmedstr = "");
	trimmedstr = (char *)malloc(sizeof(char) * (len - start + 1));
	if (!trimmedstr)
		return (NULL);
	ft_strlcpy(trimmedstr, s1 + start, len - start + 1);
	return (trimmedstr);
}
