/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvinarao <kvinarao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:29:24 by kvinarao          #+#    #+#             */
/*   Updated: 2022/03/01 18:35:59 by kvinarao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	count;
	size_t	len;
	char	*str;

	count = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (count < len)
	{
		str[count] = f(count, s[count]);
		count++;
	}
	str[count] = '\0';
	return (str);
}
