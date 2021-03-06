/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpetluk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 15:04:59 by rpetluk           #+#    #+#             */
/*   Updated: 2017/11/18 16:21:52 by rpetluk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*rt;

	if (s || n)
	{
		rt = (unsigned char *)s;
		i = 0;
		while (i < n)
		{
			rt[i] = '\0';
			i++;
		}
		s = (void *)rt;
	}
}
