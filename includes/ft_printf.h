/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:52:07 by llegrand          #+#    #+#             */
/*   Updated: 2023/05/02 16:52:07 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>
# include "../libft/libft.h"

int	ft_printf(const char *str, ...);
int	ft_putstr(char *str);
int	ft_putchar(char c);
int	ft_putptr(unsigned long long ptr);
int	ft_putnbr(int nbr);
int	ft_putunbr(unsigned int nbr);
int	ft_puthex(unsigned int nbr, const char format);

#endif
