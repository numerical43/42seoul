/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 19:24:50 by suekang           #+#    #+#             */
/*   Updated: 2022/03/18 19:31:02 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	newlst;
	t_list	firstlst;
	
	firstlst = lst;
	while (lst)
	{
		newlst = (t_list *)malloc(sizeof(t_list));
		if (!lst)
		{
			del(firstlst);
			free(lst);
			firstlst = NULL;
		}

}
