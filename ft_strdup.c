/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 13:32:08 by lgarcia           #+#    #+#             */
/*   Updated: 2017/11/08 14:27:08 by lgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char*)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (dest)
		ft_strcpy(dest, s1);
	return (dest);
}
