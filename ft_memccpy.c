/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 17:32:09 by lgarcia           #+#    #+#             */
/*   Updated: 2017/11/24 17:32:13 by lgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, void *src, int c, size_t n)
{
	while (n--)
	{
		*(t_byte *)dst++ = *(t_byte *)src;
		if (*(t_byte *)src++ == (t_byte)c)
			return ((t_byte *)dst);
	}
	return (NULL);
}
