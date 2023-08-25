/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgandari <lgandari@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 10:50:25 by lgandari          #+#    #+#             */
/*   Updated: 2023/08/25 11:03:25 by lganda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*buffer;
	size_t	i;

	i = 0;
	buffer = (char *)malloc(size * count);
	if (buffer == NULL)
		return (NULL);
	while (i < count * size)
	{
		buffer[i] = 0;
		i++;
	}
	return (buffer);
}
