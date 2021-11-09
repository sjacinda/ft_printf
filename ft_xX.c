/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xX.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjacinda <sjacinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:25:23 by sjacinda          #+#    #+#             */
/*   Updated: 2021/11/09 18:49:59 by sjacinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_xX(char *str, int *check_print, va_list ap)
{
	unsigned int	xX;

	xX = va_arg(ap, unsigned int);
	if (*str == 'x')
		ft_puthex(str, check_print, xX);
	else
		ft_puthex(str, check_print, xX);
}
