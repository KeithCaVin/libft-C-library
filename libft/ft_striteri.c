/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvinarao <kvinarao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:58:21 by kvinarao          #+#    #+#             */
/*   Updated: 2022/02/20 17:52:55 by kvinarao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	count;
	size_t	x;
	char	*temp;

	temp = (char *)s;
	count = 0;
	x = ft_strlen(s);
	while (count < x)
	{
		f(count, &temp[count]);
		count++;
	}
}
