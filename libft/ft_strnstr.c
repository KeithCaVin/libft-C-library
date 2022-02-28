/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvinarao <kvinarao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:41:50 by kvinarao          #+#    #+#             */
/*   Updated: 2022/02/23 11:50:33 by kvinarao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	count;
	size_t	countl;

	count = 0;
	countl = 0;
	if (*little == '\0' || little == (NULL))
		return ((char *)big);
	while ((count < len) && (big[count] != '\0'))
	{
		countl = 0;
		while (((big[count + countl] == little[countl])
				&& (countl + count < len)))
			countl++;
		if (countl == ft_strlen(little))
			return ((char *)big + count);
		count++;
	}
	return (NULL);
}
