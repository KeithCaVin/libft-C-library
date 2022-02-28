/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvinarao <kvinarao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:09:30 by kvinarao          #+#    #+#             */
/*   Updated: 2022/02/22 15:15:26 by kvinarao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	x;
	size_t	last;
	size_t	dstlen;

	x = 0;
	dstlen = ft_strlen(dst);
	last = dstlen;
	if (size <= dstlen)
		return (size + ft_strlen(src));
	while (src[x] && last + 1 < size)
	{
		dst[last] = src[x];
		last++;
		x++;
	}
	dst[last] = '\0';
	return (dstlen + ft_strlen(src));
}
