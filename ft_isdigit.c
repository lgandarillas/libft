/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lganda <lgandari@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 12:42:20 by lgandari          #+#    #+#             */
/*   Updated: 2023/08/19 12:49:26 by lganda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(char c)
{
	int	numeric;

	numeric = 1;
	if (c < '0' || c > '9')
		numeric = 0;
	return (numeric);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("Numeric = %d", ft_isdigit(argv[1][0]));
		return (0);
	}
	else
		return (0);
}*/
