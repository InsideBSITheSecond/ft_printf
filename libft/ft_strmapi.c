/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:10:01 by llegrand          #+#    #+#             */
/*   Updated: 2023/04/27 16:10:01 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief  Applies the function [f] to each character of the string [s], and 
 * * passing its index as first argument to create a new string 
 * * resulting from successive applications of ’f’.
 * @note   Memory for the new string is obtained 
 * with malloc and can be freed with free
 * @param  char *c
 * @retval char*
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (!s)
		return (0);
	str = ft_calloc(ft_strlen((char *)s) + 1, sizeof(char));
	if (!str)
		return (0);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
