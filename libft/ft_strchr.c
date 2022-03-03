/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvinarao <kvinarao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:21:46 by kvinarao          #+#    #+#             */
/*   Updated: 2022/03/01 19:39:17 by kvinarao         ###   ########.fr       */
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
		if ((unsigned char)*str == (unsigned char)ch)
		{
			newstr = str;
			return ((char *)newstr);
		}
		str++;
	}
	return (0);
}	
