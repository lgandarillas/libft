/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgandari <lgandari@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:06:20 by lgandari          #+#    #+#             */
/*   Updated: 2023/08/20 23:33:57 by lganda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	result;

	i = 0;
	j = 0;
	while (dest[i] && i < size)
		i++;
	while (src[j] && ((i + j + 1) < size))
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i != size)
		dest[i + j] = '\0';
	while (src[j])
		j++;
	result = i + j;
	return (result);
}
/*
int     main(void)
{
        unsigned int    size;
        char                    dest[25] = "Hola";
        char                    src[25] = "amigo";

        size = 0;
        printf("%u\n", ft_strlcat(dest, src, size));
        return (0);
}*/
