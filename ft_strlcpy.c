/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lganda <lgandari@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:17:22 by lgandari          #+#    #+#             */
/*   Updated: 2023/08/19 13:18:46 by lganda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
        unsigned int    i;
        unsigned int    j;

        i = 0;
        while (src[i])
                i++;
        j = 0;
        if (size != 0)
        {
                while (src[j] != '\0' && j < size - 1)
                {
                        dest[j] = src[j];
                        j++;
                }
                dest[j] = '\0';
        }
        return (i);
}

/*
int     main(void)
{
        char    a[10] = "Hola";
        char    b[10] = "Ad";

        ft_strlcpy(a, b, 2);
        printf("%s", b);
        return (0);
}*/
