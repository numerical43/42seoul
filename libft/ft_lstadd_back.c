/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 14:56:56 by suekang           #+#    #+#             */
/*   Updated: 2022/05/01 17:42:48 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	**last;

	last = NULL;
	if (!(new))
		return ;
	if (!(*lst))
		*lst = new;
	else
	{
		*last = ft_lstlast(*lst);
		(*last)->next = new;
	}
	new->next = NULL;
}
