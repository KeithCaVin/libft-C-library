/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvinarao <kvinarao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 19:47:27 by kvinarao          #+#    #+#             */
/*   Updated: 2022/02/23 14:09:41 by kvinarao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		count;
	int		temp;
	char	*newstr;

	count = 0;
	temp = 0;
	newstr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!newstr)
		return (0);
	while (s1[count] != '\0')
	{
		newstr[count] = s1[count];
		count++;
	}
	while (s2[temp] != '\0')
	{
		newstr[count] = s2[temp];
		count++;
		temp++;
	}
	newstr[count] = '\0';
	return (newstr);
}
