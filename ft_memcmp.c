/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgandari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:58:39 by lgandari          #+#    #+#             */
/*   Updated: 2023/09/15 22:51:58 by lganda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*copys1;
	unsigned char	*copys2;

	if (n == 0)
		return (0);
	i = 0;
	copys1 = (unsigned char *)s1;
	copys2 = (unsigned char *)s2;
	while (copys1[i] == copys2[i] && i < (n - 1))
		i++;
	return (copys1[i] - copys2[i]);
}
