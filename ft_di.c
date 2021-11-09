/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_di.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjacinda <sjacinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 14:15:41 by sjacinda          #+#    #+#             */
/*   Updated: 2021/11/07 15:54:26 by sjacinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_di(int *check_print, va_list ap)
{
	int	di;

	di = va_arg(ap, int);
	ft_putnbr(check_print, di);
}
