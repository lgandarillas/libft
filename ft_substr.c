/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgandari <lgandari@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:05:34 by lgandari          #+#    #+#             */
/*   Updated: 2023/09/13 16:10:51 by lganda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	sub = (char *)malloc((len * sizeof(char)) + 1);
	if (!sub)
		return (NULL);
	while (i < start + len + 1)
	{
		if (i < start)
			i++;
		else if (i < start + len)
		{
			((char *)sub)[j] = ((char *)s)[i];
			i++;
			j++;
		}
		else
			return (sub);
	}
	((char *)sub)[j] = '\0';
	return (sub);
}
