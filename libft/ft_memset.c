/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvinarao <kvinarao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:08:45 by kvinarao          #+#    #+#             */
/*   Updated: 2022/02/01 14:09:07 by kvinarao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			count;
	unsigned char	*newstr;

	count = 0;
	newstr = (unsigned char *)str;
	while (n > count)
	{
		newstr[count] = c;
		count++;
	}
	str = newstr;
	return (str);
}
