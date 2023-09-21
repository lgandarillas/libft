/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lganda <lgandari@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:51:02 by lganda            #+#    #+#             */
/*   Updated: 2023/09/21 11:50:52 by lganda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*cpy;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	cpy = *lst;
	while (cpy -> next != NULL)
	{
		cpy = cpy -> next;
	}
	cpy -> next = new;
}
