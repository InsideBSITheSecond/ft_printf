/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:42:19 by llegrand          #+#    #+#             */
/*   Updated: 2023/05/02 16:42:19 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	print_next_arg(char **str, va_list args)
{
	char	*type;
	int		len;

	type = ft_strchr("cspdiuxX%", (char)*(*str + 1));
	if (type)
	{
		len = 0;
		if (type[0] == 'c')
			len = ft_putchar(va_arg(args, int));
		else if (type[0] == 's')
			len = ft_putstr(va_arg(args, char *));
		else if (type[0] == 'p')
			len = ft_putptr(va_arg(args, unsigned long long));
		else if (type[0] == 'i' || type[0] == 'd')
			len = ft_putnbr(va_arg(args, int));
		else if (type[0] == 'u')
			len = ft_putunbr(va_arg(args, unsigned int));
		else if (type[0] == 'x' || type[0] == 'X')
			len = ft_puthex(va_arg(args, unsigned int), type[0]);
		else if (type[0] == '%')
			len = ft_putchar('%');
		return (len);
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		ret;

	va_start(args, str);
	i = 0;
	ret = 0;
	while (*str)
	{
		i = 0;
		while (str[i] && str[i] != '%')
			i++;
		write(1, str, i);
		str += i;
		ret += i;
		if (*str && *str == '%')
		{
			ret += print_next_arg((char **)&str, args);
			str += 2;
		}
	}
	va_end(args);
	return (ret);
}
