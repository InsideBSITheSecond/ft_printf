/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:32:59 by llegrand          #+#    #+#             */
/*   Updated: 2023/04/03 11:40:15 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** 
 * @brief  Calculates the length of the string pointed 
 * to by [str], excluding the terminator.
 * @param  char *str
 * @retval size_t
 */
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str && str[i] && str[i] != '\0')
		i++;
	return (i);
}
