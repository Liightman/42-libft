/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 12:02:10 by lgarcia           #+#    #+#             */
/*   Updated: 2017/11/28 12:03:43 by lgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (!s1 || !s2)
		return (0);
	while (n--)
	{
		if ((*(t_byte *)s1 != *(t_byte *)s2) ||
				(!*(t_byte *)s1 && !*(t_byte *)s2))
			return (*(t_byte *)s1 - *(t_byte *)s2);
		s1++;
		s2++;
	}
	return (0);
}
