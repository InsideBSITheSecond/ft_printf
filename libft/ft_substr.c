/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 16:30:46 by insidebsi         #+#    #+#             */
/*   Updated: 2023/04/27 16:07:28 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** 
 * @brief  Returns a substring from [s]. The substring begins
 * at index [start] and is of maximum size [len].
 * @note   Memory for the new string is obtained
 * with malloc and can be freed with free
 * @param  char *s
 * @param  int start
 * @param  size_t len
 * @retval char*
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;

	if (!s)
		return (0);
	if (start > ft_strlen((char *)s))
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	p = (char *)ft_calloc(sizeof(char), (len + 1));
	if (!p)
		return (0);
	s += start;
	if (s)
		ft_strlcpy(p, s, len + 1);
	return (p);
}

// int	main(void)
// {
// 	ft_substr("hola", 0, -1);
// }
