/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 13:46:59 by tmekwa            #+#    #+#             */
/*   Updated: 2017/06/10 13:30:24 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	int *i;

	i = (int *)malloc(sizeof(int));
	while (size)
	{
		if (i == '\0')
			return (NULL);
		else
			break ;
	}
	return (i);
}
