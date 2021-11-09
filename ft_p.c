/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjacinda <sjacinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 14:15:41 by sjacinda          #+#    #+#             */
/*   Updated: 2021/11/09 19:09:59 by sjacinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_p(char *str, int *check_print, va_list ap)
{
	unsigned long long int	p;

	p = va_arg(ap, unsigned long long int);
	ft_putchr(check_print, '0');
	ft_putchr(check_print, 'x');
	ft_puthex(str, check_print, p);
}
