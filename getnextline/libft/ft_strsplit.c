/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 17:15:01 by tmekwa            #+#    #+#             */
/*   Updated: 2017/06/11 00:25:17 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	*str;
	char	*fresh;
	int		i;
	int		j;

	str = (char *)malloc(sizeof(s));
	fresh = (char *)s;
	i = 0;
	j = 0;
	while (fresh != '\0')
	{
		while (fresh[i] == c)
		{
			printf(" ");
			i++;
		}
		str[j] = fresh[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (*str);
}
