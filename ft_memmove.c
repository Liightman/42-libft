/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 17:32:21 by lgarcia           #+#    #+#             */
/*   Updated: 2017/11/24 17:39:23 by lgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void		*ret;

	if (!dst || !src)
		return (dst);
	ret = dst;
	if (dst < src)
		while ((size_t)(dst - ret) < len)
			*(t_byte *)dst++ = *(t_byte *)src++;
	else
		while (len-- > 0)
			((t_byte *)dst)[len] = ((t_byte *)src)[len];
	return (ret);
}
