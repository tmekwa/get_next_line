/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 20:15:05 by tmekwa            #+#    #+#             */
/*   Updated: 2017/06/24 20:05:15 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new_st;

	if (!s)
		return (NULL);
	i = 0;
	new_st = (char *)malloc(len + 1);
	if (new_st == NULL)
		return (NULL);
	while (i < len)
	{
		new_st[i] = s[start];
		i++;
		start++;
	}
	new_st[i] = '\0';
	return (new_st);
}
