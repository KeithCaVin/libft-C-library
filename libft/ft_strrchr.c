/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvinarao <kvinarao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:47:21 by kvinarao          #+#    #+#             */
/*   Updated: 2022/02/23 11:13:02 by kvinarao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			count;
	const char	*temp;

	count = 0;
	if (c == '\0')
	{
		while (s[count] != '\0')
			count++;
		return ((char *)&s[count]);
	}
	while (s[count] != '\0')
	{
		if (s[count] == c)
		{
			temp = (char *)(s + count);
		}
		count++;
	}
	return ((char *)temp);
}
