/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:19:57 by llegrand          #+#    #+#             */
/*   Updated: 2023/04/27 17:41:41 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** 
 * @brief  Return a pointer to a new string which
 * is a duplicate of [s].
 * @note   Memory for the new string is obtained 
 * with malloc and can be freed with free
 * @param  char *c
 * @retval char*
 */
char	*ft_strdup(const char *c)
{
	void	*p;

	p = ft_calloc(ft_strlen((char *)c) + 1, sizeof(char));
	if (!p)
		return (0);
	ft_strlcpy(p, c, ft_strlen((char *)c) + 1);
	return (p);
}
