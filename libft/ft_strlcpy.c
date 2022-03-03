/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvinarao <kvinarao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:10:16 by kvinarao          #+#    #+#             */
/*   Updated: 2022/03/01 20:07:52 by kvinarao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	counter(const char *str)
{
	size_t	num;

	num = 0;
	while (str[num] != '\0')
		num++;
	return (num);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;

	count = 0;
	if (size == 0)
		return (counter(src));
	if (size > 0)
	{
		while (src[count] != '\0' && count < size - 1)
		{
			dst[count] = src[count];
			count++;
		}
	}
	if (count < size)
		dst[count] = '\0';
	while (src[count] != '\0')
		count++;
	return (count);
}
