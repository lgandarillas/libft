/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgandari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 22:02:50 by lgandari          #+#    #+#             */
/*   Updated: 2023/09/18 20:13:38 by lganda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countparts(char const *s, char c)
{
	int	i;
	int	parts;

	i = 0;
	parts = 0;
	while (s[i] != '\0')
	{
		if ((s[i] != c && i == 0) || (s[i] != c && s[i - 1] == c))
			parts++;
		i++;
	}
	return (parts);
}

void	ft_freesplit(char **str, size_t parts)
{
	while (parts > 0)
	{
		free(str[parts]);
		parts--;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**aux;
	int		part;

	if (!s)
		return (NULL);
	i = 0;
	part = 0;
	aux = ft_calloc(sizeof(char *), (ft_countparts(s, c) + 1));
	if (!aux)
		return (NULL);
	while (s[i] != '\0' && (part < ft_countparts(s, c)))
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		j = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		aux[part] = ft_substr(s, j, (i - j));
		part++;
	}
	if (!aux)
		ft_freesplit(aux, ft_countparts(s, c));
	return (aux);
}
