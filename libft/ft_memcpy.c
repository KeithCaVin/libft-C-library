/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvinarao <kvinarao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:59:13 by kvinarao          #+#    #+#             */
/*   Updated: 2022/02/01 14:07:23 by kvinarao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		count;
	char		*newdest;
	const char	*newsrc;

	count = 0;
	newdest = (char *)dest;
	newsrc = (const char *)src;
	if (!dest && !src)
		return (0);
	if ((dest == src) || n == 0)
		return (dest);
	while (count < n)
	{
		newdest[count] = newsrc[count];
		count++;
	}
	dest = newdest;
	return (dest);
}
