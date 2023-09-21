/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lganda <lgandari@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:52:02 by lganda            #+#    #+#             */
/*   Updated: 2023/09/21 11:57:51 by lganda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cpy;
	t_list	*aux;

	cpy = *lst;
	while (cpy != NULL)
	{
		aux = cpy -> next;
		del(cpy -> content);
		free(cpy);
		cpy = aux;
	}
	*lst = NULL;
}
