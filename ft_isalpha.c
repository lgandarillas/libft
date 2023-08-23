/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgandari <lgandari@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 12:23:19 by lgandari          #+#    #+#             */
/*   Updated: 2023/08/20 23:31:00 by lganda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char c)
{
	if (c < 'A' || c > 'z')
		return (0);
	if ('Z' < c && c < 'a')
		return (0);
	else
		return (1);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("Alpha = %d", ft_isalpha(argv[1][0]));
		return (0);
	}
	else
		return (0);
}*/
