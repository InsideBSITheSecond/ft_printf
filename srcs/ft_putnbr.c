/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:24:36 by llegrand          #+#    #+#             */
/*   Updated: 2023/05/05 18:24:36 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbr(int nbr)
{
	int		len;
	char	*str;

	len = 0;
	str = ft_itoa(nbr);
	if (!str)
		return (-1);
	len = ft_putstr(str);
	free(str);
	return (len);
}

static int	ft_ilen(unsigned int n)
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

char	*ft_uitoa(unsigned int nbr)
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

int	ft_putunbr(unsigned int nbr)
{
	int		len;
	char	*str;

	len = 0;
	str = ft_uitoa(nbr);
	if (!str)
		return (-1);
	len = ft_putstr(str);
	free(str);
	return (len);
}
