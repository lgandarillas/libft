/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgandari <lgandari@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:19:31 by lgandari          #+#    #+#             */
/*   Updated: 2023/08/24 12:24:09 by lganda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 'a' - 'A';
	return (c);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("a -> %c", ft_toupper('a'));
	return (0);
}*/
