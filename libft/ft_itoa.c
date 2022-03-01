/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvinarao <kvinarao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:21:18 by kvinarao          #+#    #+#             */
/*   Updated: 2022/03/01 18:09:33 by kvinarao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	abs_value(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

int	get_num_length(int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
	{
		len = 1;
		return (len);
	}
	if (nbr < 0)
	{
		nbr *= 1;
		len++;
	}
	while (nbr != 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		num;
	int		temp;
	char	*str;

	num = get_num_length(n);
	temp = n;
	str = (char *)malloc(sizeof(char) * (num + 1));
	if (!str)
		return (NULL);
	str[num--] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
	}
	if (temp < 0)
		str[0] = '-';
	while (temp != 0)
	{
		str[num] = abs_value(temp % 10) + '0';
		temp /= 10;
		num--;
	}
	return (str);
}
