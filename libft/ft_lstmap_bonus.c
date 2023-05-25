/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:28:11 by llegrand          #+#    #+#             */
/*   Updated: 2023/04/20 18:28:11 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** 
 * @brief  Create and return a new list created by passing each nodes from [lst]
 * *  in the given function [f] and deleting it with [del] in case of error.
 * @param  t_list *lst
 * @param  void *f
 * @param  void *del
 * @retval t_list*
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*nl;
	t_list	*ne;

	if (!lst || !*f || !*del)
		return (0);
	nl = ft_lstnew(f(lst->content));
	while (lst->next)
	{
		lst = lst->next;
		ne = ft_lstnew(f(lst->content));
		if (!ne)
		{
			ft_lstclear(&nl, del);
			return (0);
		}
		ft_lstadd_back(&nl, ne);
	}
	return (nl);
}
