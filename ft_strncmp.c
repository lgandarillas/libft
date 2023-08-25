/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgandari <lgandari@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:11:42 by lgandari          #+#    #+#             */
/*   Updated: 2023/08/24 12:03:57 by lganda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((unsigned char)s1[i] == (unsigned char)s2[i] && s1[i]
		&& i < (n - 1))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int     main(void)
{
        int             real;
        int             clon;
        char    str1[] = "test\200";
        char    str2[] = "test\0";

        real = strncmp(str1, str2, 6);
        clon = ft_strncmp(str1, str2, 6);
        printf("Real: %d, Clon: %d", real, clon);
        return (0);
}*/
