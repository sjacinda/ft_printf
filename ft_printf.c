/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjacinda <sjacinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:32:33 by sjacinda          #+#    #+#             */
/*   Updated: 2021/11/09 16:45:00 by sjacinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_if(char *str, int *check_print, va_list ap)
{
	if (*str == 'c')
		ft_c(check_print, ap);
	else if (*str == 's')
		ft_s(check_print, ap);
	else if (*str == 'p')
		ft_p(str, check_print, ap);
	else if (*str == 'd' || *str == 'i')
		ft_di(check_print, ap);
	else if (*str == 'u')
		ft_u(check_print, ap);
	else if (*str == 'x' || *str == 'X')
		ft_xX(str, check_print, ap);
	else
		ft_putchr(check_print, *str);
}

int	ft_printf(const char *str, ...)
{
	int		check_print;
	va_list	ap;

	check_print = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_if((char *)str, &check_print, ap);
			str++;
		}
		else
			ft_putchr(&check_print, *str++);
	}
	va_end(ap);
	return (check_print);
}
