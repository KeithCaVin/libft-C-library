/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvinarao <kvinarao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:23:22 by kvinarao          #+#    #+#             */
/*   Updated: 2022/02/05 17:32:13 by kvinarao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	count;
	int	sign;

	res = 0;
	count = 0;
	sign = 1;
	while ((str[count] == ' ') || (str[count] == '\n') || (str[count] == '\t')
		|| (str[count] == '\v') || (str[count] == '\f') || (str[count] == '\r'))
		count++;
	if ((str[count] == '-') || (str[count] == '+'))
	{
		if (str[count] == '-')
			sign = -1;
		count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		res = (res * 10) + (str[count] - '0');
		count++;
	}
	return (res * sign);
}
