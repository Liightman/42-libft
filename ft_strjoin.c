/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 18:07:43 by lgarcia           #+#    #+#             */
/*   Updated: 2017/11/10 18:08:28 by lgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str;

	if (!s1 || !s2)
		return (0);
	str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (0);
	ft_strcpy(str, s1);
	ft_strcat(str, s2);
	str[ft_strlen(s1) + ft_strlen(s2) + 1] = 0;
	return (str);
}
