/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgandari <lgandari@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:40:23 by lgandari          #+#    #+#             */
/*   Updated: 2023/09/15 13:46:00 by lganda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set);

int	ft_findchar(char const *set, char c)
{// revisar todo
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_isend(char const *str, int i, char const *set)
{
	while (str[i])
	{
		if (!ft_findchar(set, str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_getlen(char const *str, int i, char const *set)
{
	int	len;

	len = 0;
	while (!ft_isend(str, i, set))
	{
		len++;
		i++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	char	*ptr;
	int		i;
	int		j;

	i = 0;
	while (ft_findchar(set, s1[i]))
		i++;
	len = ft_getlen(s1, i, set);
	ptr = (char *) malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (0);
	j = 0;
	while (j < len)
		ptr[j++] = s1[i++];
	ptr[j] = 0;
	return (ptr);
}
