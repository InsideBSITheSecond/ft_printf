/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 13:37:35 by llegrand          #+#    #+#             */
/*   Updated: 2023/04/18 20:12:02 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** 
 * @brief  Appends the [src] string to the [dst] string, overwriting 
 * the [dst] terminator and adding one at the end of the result.
 * @note   The strings may not overlap, and the [dst] string
 * must have enough space for the result.
 * @param  char *dst
 * @param  char *src
 * @param  size_t dstsize
 * @retval size_t
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	l;

	l = ft_strlen(dst) + ft_strlen((char *)src);
	if (dstsize == 0)
		return (ft_strlen((char *)src));
	if (ft_strlen(dst) >= dstsize)
		return (ft_strlen((char *)src) + dstsize);
	i = 0;
	while (*dst)
		dst++;
	while ((i < dstsize - (l - ft_strlen((char *)src)) - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (l);
}
