/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvinarao <kvinarao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:52:58 by kvinarao          #+#    #+#             */
/*   Updated: 2022/03/01 18:25:16 by kvinarao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	count;	
	size_t	slen;
	size_t	x;

	count = 0;
	x = 0;
	if (!s)
		return (0);
	slen = ft_strlen(s);
	dest = (char *)malloc(len + 1);
	if (!dest)
		return (0);
	while (x < len && start < slen)
	{
		dest[count] = s[start];
		count++;
		start++;
		x++;
	}
	dest[count] = '\0';
	return (dest);
}
