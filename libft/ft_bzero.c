/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvinarao <kvinarao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:52:40 by kvinarao          #+#    #+#             */
/*   Updated: 2022/02/05 17:49:02 by kvinarao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t			count;
	unsigned char	*newstr;

	count = 0;
	newstr = (unsigned char *)str;
	while (n > count)
	{
		newstr[count] = 0;
		count++;
	}
	str = newstr;
}
