/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 12:11:33 by lgarcia           #+#    #+#             */
/*   Updated: 2017/11/28 12:12:00 by lgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	char	*it1;
	char	*it2;

	if (!*s2)
		return ((void *)s1);
	while (*s1)
	{
		if (*s1 == *s2)
		{
			it1 = (void *)s1 + 1;
			it2 = (void *)s2 + 1;
			while (*it1 && *it2 && *it1 == *it2)
			{
				++it1;
				++it2;
			}
			if (!*it2)
				return ((void *)s1);
		}
		s1++;
	}
	return (NULL);
}
