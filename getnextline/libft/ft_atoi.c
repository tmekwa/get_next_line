/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 13:18:32 by tmekwa            #+#    #+#             */
/*   Updated: 2017/06/11 15:55:42 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int sign;
	int results;
	int a;

	results = 0;
	a = 0;
	sign = 1;
	while (*str == 32 || *str == '\t' || *str == '\r')
		str += 1;
	if (*str == '+' || *str == '-')
		sign = -1;
	str++;
	while (ft_isdigit(*str))
	{
		results = results * 10;
		results = results + (int)(*str - 48);
		str++;
		a++;
	}
	if (a > 19)
		return ((sign < 0) ? 0 : -1);
	return (results * sign);
}
