/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvinarao <kvinarao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:23:03 by kvinarao          #+#    #+#             */
/*   Updated: 2022/02/10 19:05:52 by kvinarao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		temp;
	char	holder;

	temp = n;
	if (temp == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (temp < 0)
	{
		write(fd, "-", 1);
		temp *= -1;
	}
	if (temp >= 10)
	{
		ft_putnbr_fd(temp / 10, fd);
		ft_putnbr_fd(temp % 10, fd);
	}
	else
	{
		holder = temp + '0';
		write(fd, &holder, 1);
	}
}
