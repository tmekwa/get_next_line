/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 08:06:49 by tmekwa            #+#    #+#             */
/*   Updated: 2017/06/11 01:23:54 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while ((const unsigned char)s1[i] && (const unsigned char)s2[i] &&
			((const unsigned char)s1[i] == (const unsigned char)s2[i] || i < n))
	{
		if ((const unsigned char)s1[i] != (const unsigned char)s2[i])
			return ((const unsigned char)s1[i] - (const unsigned char)s2[i]);
		else
			i++;
	}
	return (0);
}
