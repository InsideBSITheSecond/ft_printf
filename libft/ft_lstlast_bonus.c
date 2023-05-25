/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:45:15 by llegrand          #+#    #+#             */
/*   Updated: 2023/04/14 15:45:15 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** 
 * @brief  Get the last node from [lst] and return it
 * @param  t_list *lst
 * @retval t_list*
 */
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*nl;

	if (!lst)
		return (0);
	if (lst->next)
	{
		nl = lst->next;
		while (nl->next)
			nl = nl->next;
		return (nl);
	}
	else
		return (lst);
}
