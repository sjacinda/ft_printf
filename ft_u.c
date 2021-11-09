/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjacinda <sjacinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 14:15:41 by sjacinda          #+#    #+#             */
/*   Updated: 2021/11/07 15:55:36 by sjacinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_u(int *check_print, va_list ap)
{
	unsigned int	u;

	u = va_arg(ap, unsigned int);
	ft_u_putnbr(check_print, u);
}
