/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvinarao <kvinarao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:21:46 by kvinarao          #+#    #+#             */
/*   Updated: 2022/03/01 15:26:24 by kvinarao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int			x;
	const char	*newstr;

	x = 0;
	if (ch == '\0')
	{
		while (str[x] != '\0')
			x++;
		return ((char *)&str[x]);
	}
	while (*str != '\0')
	{
		if (*str == ch)
		{
			newstr = str;
			return ((char *)newstr);
		}
		str++;
	}
	return (0);
}	
