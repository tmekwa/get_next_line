/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 21:55:59 by tmekwa            #+#    #+#             */
/*   Updated: 2017/06/10 23:52:13 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		a;
	int		b;
	char	*fresh;
	char	*typcast;

	typcast = (char *)malloc(sizeof(s));
	fresh = (char *)s;
	a = 0;
	b = 0;
	while (fresh[a] != '\0')
	{
		while (fresh[a] == ' ' || fresh[a] == '\t' || fresh[a] == '\n')
			a++;
		typcast[b] = fresh[a];
		a++;
		b++;
	}
	typcast[b] = '\0';
	return (typcast);
}
