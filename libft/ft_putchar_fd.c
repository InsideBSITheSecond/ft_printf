/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:09:10 by llegrand          #+#    #+#             */
/*   Updated: 2023/04/27 16:09:10 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** 
 * @brief  Put the [c] char into [fd] file descriptor
 * @param  char c
 * @param  int fd
 * @retval void
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(c));
}
