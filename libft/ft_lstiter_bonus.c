/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:28:10 by llegrand          #+#    #+#             */
/*   Updated: 2023/04/20 18:28:10 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** 
 * @brief  Iterate over [lst] and applies the given function [f] on each node
 * @param  t_list *lst
 * @param  void *f
 * @retval void
 */
void	ft_lstiter(t_list *lst, void (*f)(void*))
{
	if (!lst || !f)
		return ;
	f(lst->content);
	if (lst->next)
		ft_lstiter(lst->next, f);
}
