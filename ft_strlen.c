/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgandari <lgandari@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:09:26 by lgandari          #+#    #+#             */
/*   Updated: 2023/08/20 23:34:30 by lganda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}
/*
#include <stdio.h>
int     main(void)
{
        char    *str;
        int             i;

        str = "LOL"; 
        i = ft_strlen(str);
        printf("%d", i);
        return (0);
}*/
