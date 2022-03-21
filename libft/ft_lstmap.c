/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suekang <suekang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 14:42:59 by suekang           #+#    #+#             */
/*   Updated: 2022/03/19 14:43:04 by suekang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**firstlst;
	t_list	*newlst;
	t_list	**temp;
	int		flag;

	flag = 1;
	while (lst)
	{
		ft_lstiter(lst, *f);
		newlst = ft_lstnew(lst);
		if (!newlst)
		{
			ft_lstclear(temp, *del);
			return (NULL);
		}
		if (flag)
		{
			temp = &newlst;
			flag = 0;
		}
		else
			ft_lstadd_back(temp, newlst);
	}
	return (newlst);
}
