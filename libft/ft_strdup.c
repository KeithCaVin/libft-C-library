/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvinarao <kvinarao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:50:39 by kvinarao          #+#    #+#             */
/*   Updated: 2022/02/05 17:51:15 by kvinarao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	strcount;
	int		count;
	char	*newstr;

	count = 0;
	strcount = ft_strlen(str) + 1;
	newstr = (char *)malloc(strcount);
	if (newstr == NULL)
		return (0);
	while (str[count] != '\0')
	{
		newstr[count] = str[count];
		count++;
	}
	newstr[count] = '\0';
	return (newstr);
}
