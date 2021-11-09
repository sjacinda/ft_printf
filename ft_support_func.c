/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_support_func.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjacinda <sjacinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:02:31 by sjacinda          #+#    #+#             */
/*   Updated: 2021/11/09 19:09:48 by sjacinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchr(int *check_print, char c)
{
	write(1, &c, 1);
	(*check_print)++;
}

void	ft_puthex(char *str, int *check_print, unsigned long long int n)
{
	if (n >= 16)
	{
		ft_puthex(str, check_print, n / 16);
		n %= 16;
	}
	if (n > 9 && n < 16)
	{
		if (*str == 'x' || *str == 'p')
			ft_putchr(check_print, n % 10 + 97);
		else
			ft_putchr(check_print, n % 10 + 65);
	}
	else
		ft_putchr(check_print, n + '0');
}

void	ft_putnbr(int *check_print, int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*check_print) += 11;
		return ;
	}
	if (n < 0)
	{
		ft_putchr(check_print, '-');
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr(check_print, n / 10);
		ft_putnbr(check_print, n % 10);
	}
	else
		ft_putchr(check_print, n + '0');
}

void	ft_u_putnbr(int *check_print, unsigned int n)
{
	if (n >= 10)
	{
		ft_u_putnbr(check_print, n / 10);
		ft_u_putnbr(check_print, n % 10);
	}
	else
		ft_putchr(check_print, n + '0');
}
