/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvinarao <kvinarao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:41:50 by kvinarao          #+#    #+#             */
/*   Updated: 2022/03/01 17:37:37 by kvinarao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	count;
	size_t	countl;

	count = 0;
	countl = 0;
	if (*little == '\0' || little == NULL)
		return ((char *)big);
	while ((count < len) && (big[count] != '\0'))
	{
		countl = 0;
		while (((big[count + countl] == little[countl])
				&& (countl + count < len)))
		{
			if (little[countl + 1] == '\0')
				return ((char *)big + count);
			countl++;
		}
		count++;
	}
	return (NULL);
}
