/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:19:57 by llegrand          #+#    #+#             */
/*   Updated: 2023/04/27 16:06:15 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** 
 * @brief  I turn little char strings into integers
 * @note   I'm leaving a note here
 * @param  char *str
 * @retval int
 */
int	ft_atoi(const char *str)
{
	long	nbr;
	int		sign;

	if (!str)
		return (0);
	nbr = 0;
	sign = 1;
	while (*str && ((*str >= 9 && *str <= 13) || (*str == 32)))
		str++;
	if (*str && (*str == '-' || *str == '+'))
		if (*str++ == '-')
			sign = -1;
	while (*str && ft_isdigit(*str))
	{
		nbr = nbr * 10 + (*str++ - '0');
		if (nbr < 0 && sign == 1)
			return (-1);
		if (nbr < 0 && sign == -1)
			return (0);
	}
	return (nbr * sign);
}
