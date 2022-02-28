/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvinarao <kvinarao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:33:19 by kvinarao          #+#    #+#             */
/*   Updated: 2022/02/05 17:34:03 by kvinarao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t		count;
	const char	*newstr;

	newstr = (const char *)str;
	count = 0;
	while (count < n)
	{
		if (newstr[count] == c)
		{
			return ((void *)newstr + count);
		}
		count++;
	}
	return (0);
}
