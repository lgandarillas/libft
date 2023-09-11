/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgandari <lgandari@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 10:50:25 by lgandari          #+#    #+#             */
/*   Updated: 2023/09/11 11:34:35 by lgandari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*buffer;
	size_t	i;

	i = 0;
	buffer = (char *)malloc(size * nmemb);
	if (buffer == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		buffer[i] = 0;
		i++;
	}
	return (buffer);
}
