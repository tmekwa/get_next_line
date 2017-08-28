/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 18:51:48 by tmekwa            #+#    #+#             */
/*   Updated: 2017/06/20 20:56:01 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	k = ft_strlen(s1) + ft_strlen(s2);
	fresh = (char *)malloc(sizeof(char) * k + 1);
	while (s1[i])
		fresh[j++] = s1[i++];
	i = 0;
	while (s2[i])
		fresh[j++] = s2[i++];
	fresh[j] = '\0';
	return (fresh);
}
