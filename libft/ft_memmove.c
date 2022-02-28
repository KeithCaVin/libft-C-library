/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvinarao <kvinarao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:07:54 by kvinarao          #+#    #+#             */
/*   Updated: 2022/02/01 14:08:17 by kvinarao         ###   ########.fr       */
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
	if (newsrc < newdest)
	{
		count = n;
		while (count--)
			newdest[count] = newsrc [count];
	}
	else
	{
		count = 0;
		while (count < n)
		{
			newdest[count] = newsrc [count];
			count++;
		}
	}
	dest = newdest;
	return (dest);
}
