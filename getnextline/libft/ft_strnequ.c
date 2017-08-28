/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 19:14:13 by tmekwa            #+#    #+#             */
/*   Updated: 2017/06/10 13:33:30 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(const char *s1, const char *s2, size_t n)
{
	size_t	a;
	size_t	b;
	char	*str1;
	char	*str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	a = strlen(str1);
	b = 0;
	if (*str1 == '\0' || *str2 == '\0')
		return ('\0');
	else if (str1[b] == str2[b] && n <= a)
		return (1);
	else
		return (0);
}
