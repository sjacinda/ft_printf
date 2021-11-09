/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjacinda <sjacinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 14:15:41 by sjacinda          #+#    #+#             */
/*   Updated: 2021/11/07 21:36:08 by sjacinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_s(int *check_print, va_list ap)
{
	char	*s;

	s = va_arg(ap, char *);
	if (!s)
		s = "(null)";
	while (*s)
		ft_putchr(check_print, *s++);
}
