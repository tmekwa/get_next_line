/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 21:21:03 by tmekwa            #+#    #+#             */
/*   Updated: 2017/06/11 12:05:40 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	if (little[b] == '\0')
		return ((char *)big);
	while (big[a] && len > 0)
	{
		while (little[a] == big[a + b] && len > 0)
		{
			if (little[b + 1] == '\0')
				return ((char *)big + a);
			b++;
			len--;
		}
		len--;
		a++;
	}
	return (0);
}
