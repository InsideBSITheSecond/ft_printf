/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:28:09 by llegrand          #+#    #+#             */
/*   Updated: 2023/04/20 18:28:09 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** 
 * @brief  Delete and free the [lst] chained list using the given [del] function
 * @param  t_list **lst
 * @param  void *del
 * @retval void
 */
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*nlstp;
	t_list	*tmplst;

	if (!del || !lst || !*lst)
		return ;
	tmplst = 0;
	nlstp = *lst;
	while (nlstp)
	{
		tmplst = nlstp->next;
		ft_lstdelone(nlstp, del);
		nlstp = tmplst;
	}
	*lst = 0;
}
