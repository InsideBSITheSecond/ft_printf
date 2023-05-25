/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 19:54:48 by llegrand          #+#    #+#             */
/*   Updated: 2023/04/13 19:54:48 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** 
 * @brief  Create a new chained list with whatever passed content
 * @param  void *content
 * @retval t_list*
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = (t_list *) ft_calloc(1, sizeof(t_list));
	if (head == 0)
		return (0);
	head->content = content;
	head->next = 0;
	return (head);
}
