/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:01:31 by llegrand          #+#    #+#             */
/*   Updated: 2023/04/14 17:01:31 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** 
 * @brief  Add the lst [new] element at the end of the [lst] chained list
 * @param  t_list **lst
 * @param  t_list *new
 * @retval void
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*dest;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	dest = ft_lstlast(*lst);
	dest->next = new;
}
