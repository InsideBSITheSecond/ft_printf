/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:51:30 by llegrand          #+#    #+#             */
/*   Updated: 2023/05/08 16:51:30 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_hexlen(unsigned int nbr)
{
	int	len;

	len = 0;
	while (nbr != 0)
	{
		len++;
		nbr /= 16;
	}
	return (len);
}

void	ft_printhex(unsigned int nbr, const char format)
{
	if (nbr >= 16)
	{
		ft_printhex(nbr / 16, format);
		ft_printhex(nbr % 16, format);
	}
	else
	{
		if (nbr <= 9)
			ft_putchar_fd((nbr + '0'), 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd((nbr - 10 + 'a'), 1);
			if (format == 'X')
				ft_putchar_fd((nbr - 10 + 'A'), 1);
		}
	}
}

int	ft_puthex(unsigned int nbr, const char format)
{
	if (nbr == 0)
		return (write(1, "0", 1));
	ft_printhex(nbr, format);
	return (ft_hexlen(nbr));
}
