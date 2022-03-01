/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvinarao <kvinarao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:23:22 by kvinarao          #+#    #+#             */
/*   Updated: 2022/03/01 19:09:45 by kvinarao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	checker(int nb)
{
	if (nb == -1)
		return (0);
	else
		return (-1);
}

int	ft_atoi(const char *str)
{
	size_t		count;
	long		res;
	int			sign;

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
		if ((res * 10 + (str[count] - '0')) / 10 != res)
			return (checker(sign));
		res = res * 10 + (str[count] - '0');
		count++;
	}
	return (res * sign);
}
