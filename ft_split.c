/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgandari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 22:02:50 by lgandari          #+#    #+#             */
/*   Updated: 2023/09/20 15:32:11 by lganda           ###   ########.fr       */
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

void	ft_freesplit(char **str)
{
	size_t	i;

	i = 0;
	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
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
	aux = ft_calloc(sizeof(char *), ft_countparts(s, c) + 1);
	if (aux == NULL)
	{
		free(aux);
		return (NULL);
	}
	while (s[i] != '\0' && (part < ft_countparts(s, c)))
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		j = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		aux[part++] = ft_substr(s, j, (i - j));
	}
	return (aux);
}
/*
#include <stdio.h>
int	main(void)
{
	char	**arr;
	int	i;

	i = 0;
	arr = ft_split("hello!", ' ');
	while (i < 1)
	{
		printf("%s", arr[i]);
		printf("\n");
		i++;
	}
	return (0);
}*/
