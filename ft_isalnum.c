/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgandari <lgandari@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 22:29:12 by lgandari          #+#    #+#             */
/*   Updated: 2023/08/20 23:30:30 by lganda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(char c);
int	ft_isalpha(char c);

int	ft_isalnum(char c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	else
		return (0);
}

int	ft_isdigit(char c)
{
	if (c < '0' || c > '9')
		return (0);
	else
		return (1);
}

int	ft_isalpha(char c)
{
	if (c < 'A' || c > 'z')
		return (0);
	if ('Z' < c && c < 'a')
		return (0);
	else
		return (1);
}
