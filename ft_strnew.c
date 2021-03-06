/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpetluk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 17:19:17 by rpetluk           #+#    #+#             */
/*   Updated: 2017/11/05 17:19:34 by rpetluk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strnew(size_t size)
{
	void *re;

	if (!(re = malloc(size + 1)))
		return (NULL);
	ft_memset(re, 0, size + 1);
	return (re);
}
