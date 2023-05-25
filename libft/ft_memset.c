/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:19:57 by llegrand          #+#    #+#             */
/*   Updated: 2023/04/27 17:26:24 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** 
 * @brief  Fills the first [len] bytes of the memory area 
 * pointed to by [b] with the constant byte [c].
 * @param  void *b
 * @param  int *c
 * @param  size_t len
 * @retval void*
 */
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	if (!b || !len)
		return (b);
	i = 0;
	while (len > i)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
