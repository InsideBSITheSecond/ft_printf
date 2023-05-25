/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:08:25 by llegrand          #+#    #+#             */
/*   Updated: 2023/04/27 16:08:25 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** 
 * @brief  Return the size of given [lst] chained list
 * @param  t_list *lst
 * @retval int
 */
int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	nl;

	i = 1;
	if (!lst)
		return (0);
	if (lst->next)
	{
		nl = *lst->next;
		while (nl.next)
		{
			nl = *nl.next;
			i++;
		}
		return (i + 1);
	}
	else
		return (i);
}

// int	main(void)
// {
// 	t_list *list = ft_lstnew("uwu");
// 	ft_lstadd_back(&list, ft_lstnew("owo"));
// 	ft_lstadd_back(&list, ft_lstnew("senpai"));
// 	ft_lstadd_back(&list, ft_lstnew("nyaaa"));
// 	ft_lstadd_back(&list, ft_lstnew("yamete"));
// 	ft_lstadd_back(&list, ft_lstnew("kudasai"));
// 	ft_lstsize(list);
// }
