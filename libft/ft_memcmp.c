/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvinarao <kvinarao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:38:06 by kvinarao          #+#    #+#             */
/*   Updated: 2022/02/05 17:39:04 by kvinarao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				count;
	const unsigned char	*news1;
	const unsigned char	*news2;

	count = 0;
	news1 = (const unsigned char *)s1;
	news2 = (const unsigned char *)s2;
	while (count < n)
	{
		if (news1[count] != news2[count])
			return (news1[count] - news2[count]);
		count++;
	}
	return (0);
}
