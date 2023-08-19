/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lganda <lgandari@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 12:23:19 by lgandari          #+#    #+#             */
/*   Updated: 2023/08/19 12:30:51 by lganda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char c)
{
	int	alpha;

	alpha = 1;
	if (c < 'A' || c > 'z')
		alpha = 0;
	if ('Z' < c && c < 'a')
		alpha = 0;
	return (alpha);
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
