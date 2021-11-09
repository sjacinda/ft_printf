/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjacinda <sjacinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 14:15:41 by sjacinda          #+#    #+#             */
/*   Updated: 2021/11/07 18:56:47 by sjacinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_c(int *check_print, va_list ap)
{
	char	c;

	c = va_arg(ap, int);
	ft_putchr(check_print, c);
}
