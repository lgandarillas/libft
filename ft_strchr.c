/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgandari <lgandari@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:55:31 by lgandari          #+#    #+#             */
/*   Updated: 2023/09/11 11:32:38 by lgandari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c < 0 || c > 255)
		c = (unsigned int)c;
	while (*s != '\0' && *s != c)
		s++;
	if (*s == c)
		return ((char *)s);
	else
		return (NULL);
}
