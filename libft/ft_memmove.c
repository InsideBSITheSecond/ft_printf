/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:19:57 by llegrand          #+#    #+#             */
/*   Updated: 2023/04/18 19:54:19 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** 
 * @brief  Copies [n] bytes from memory area [src] to memory area [dest]
 * @param  void *dst
 * @param  void *src
 * @param  size_t n
 * @retval void*
 */
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (src == dst || !n || !src || !dst)
		return (dst);
	if (dst < src)
		ft_memcpy(dst, src, n);
	else
	{
		while (n > 0)
		{
			((unsigned char *)dst)[n - 1] = ((unsigned char *)src)[n - 1];
			n--;
		}
	}
	return (dst);
}
