/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgandari <lgandari@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:12:00 by lgandari          #+#    #+#             */
/*   Updated: 2023/08/26 17:54:38 by lganda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*lst;

	lst = NULL;
	if (c < 0 || c > 255)
		c = (unsigned int)c;
	else if (c == '\0')
		return (NULL);
	while (*s != '\0')
	{
		if (*s == c)
			lst = (char *)s;
		s++;
	}
	if (lst != NULL && *lst == c)
		return (lst);
	else
		return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str[] = "Hola";
	printf("\nF: %s", ft_strrchr(str, '\0'));
	printf("\nO: %s", strrchr(str, '\0'));
	return (0);
}*/
