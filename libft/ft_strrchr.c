/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvinarao <kvinarao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:47:21 by kvinarao          #+#    #+#             */
/*   Updated: 2022/03/01 17:32:17 by kvinarao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			count;
	int			checker;
	const char	*temp;

	checker = 0;
	count = 0;
	if (c == '\0')
	{
		while (s[count] != '\0')
			count++;
		return ((char *)&s[count]);
	}
	while (s[count] != '\0')
	{
		if (s[count] == (char)c)
		{
			temp = (char *)(s + count);
			checker = 1;
		}
		count++;
	}
	if (checker == 0 && s[count] == '\0')
		return (NULL);
	return ((char *)temp);
}
