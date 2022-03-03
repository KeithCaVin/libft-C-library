/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvinarao <kvinarao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:52:58 by kvinarao          #+#    #+#             */
/*   Updated: 2022/03/01 20:28:56 by kvinarao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	count;	
	size_t	slen;

	count = 0;
	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (len > slen)
		len = slen;
	dest = (char *)malloc(len + 1);
	if (!dest)
		return (0);
	if (start > slen)
	{
		dest[0] = '\0';
		return (dest);
	}
	while (count < len && start < slen)
		dest[count++] = s[start++];
	dest[count] = '\0';
	return (dest);
}
