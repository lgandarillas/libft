/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgandari <lgandari@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:12:00 by lgandari          #+#    #+#             */
/*   Updated: 2023/09/11 19:57:21 by lganda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	pos;

	c = c % 256;
	pos = ft_strlen(s);
	while (pos >= 0)
	{
		if (s[pos] == c)
			return ((char *)&s[pos]);
		pos--;
	}
	return (0);
}
