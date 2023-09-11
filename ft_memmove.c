/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgandari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:26:45 by lgandari          #+#    #+#             */
/*   Updated: 2023/09/11 16:44:58 by lgandari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*saux;
	char	*daux;
	size_t	i;

	saux = (char *)src;
	daux = (char *)dst;
	i = 0;
	if (daux > saux)
		while (len-- > 0)
			daux[len] = saux[len];
	else
	{
		while (i < len)
		{
			daux[i] = saux[i];
			i++;
		}
	}
	return ((char *)dst);
}
