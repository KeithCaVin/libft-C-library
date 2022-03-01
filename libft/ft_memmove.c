/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvinarao <kvinarao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:07:54 by kvinarao          #+#    #+#             */
/*   Updated: 2022/03/01 16:22:38 by kvinarao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		count;
	char		*newdest;
	const char	*newsrc;

	count = 0;
	newdest = (char *)dest;
	newsrc = (const char *)src;
	if (!src && !dest)
		return (NULL);
	while (n > 0 && newsrc < newdest)
	{
		newdest[n - 1] = newsrc[n - 1];
		n--;
	}
	if (src >= dest)
	{
		while (count < n)
		{
			newdest[count] = newsrc[count];
			count++;
		}
	}
	return (dest);
}
