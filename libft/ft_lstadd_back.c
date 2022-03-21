/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 14:56:56 by suekang           #+#    #+#             */
/*   Updated: 2022/03/19 14:57:04 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	while (*lst)
		*lst = (*lst)->next;
	(*lst)->next = new;
}
