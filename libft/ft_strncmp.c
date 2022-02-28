/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvinarao <kvinarao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:39:53 by kvinarao          #+#    #+#             */
/*   Updated: 2022/02/05 17:40:52 by kvinarao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		return (0);
	while ((str1[count] == str2[count]) && (str1[count] != '\0'))
	{
		if (count < (n - 1))
			count++;
		else
			return (0);
	}
	return ((unsigned char )(str1[count]) - (unsigned char )(str2[count]));
}
