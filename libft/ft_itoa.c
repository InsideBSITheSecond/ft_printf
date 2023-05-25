/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:43:24 by llegrand          #+#    #+#             */
/*   Updated: 2023/04/12 15:43:24 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** 
 * @brief  Helper function for ft_itoa to know the length of the given integer
 * @param  int n
 * @retval int
 */
static int	ft_ilen(int n)
{
	int				i;
	unsigned int	num;

	i = 1;
	num = n;
	if (n < 0)
	{
		i = 2;
		num = -n;
	}
	while (num > 9)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

/** 
 * @brief  Convert an integer into a char*
 * @param  int nbr
 * @retval char* str
 */
char	*ft_itoa(int nbr)
{
	int				i;
	unsigned int	unbr;
	char			*buffer;

	buffer = (char *)malloc(ft_ilen(nbr) + 1);
	if (buffer == NULL)
		return (0);
	i = ft_ilen(nbr);
	unbr = nbr;
	if (nbr < 0)
	{
		unbr = -nbr;
		buffer[0] = '-';
	}
	buffer[i] = 0;
	buffer[i - 1] = '0';
	while (unbr > 0)
	{
		i--;
		buffer[i] = unbr % 10 + '0';
		unbr /= 10;
	}
	return (buffer);
}
