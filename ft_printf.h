/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjacinda <sjacinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 14:05:10 by sjacinda          #+#    #+#             */
/*   Updated: 2021/11/09 19:10:14 by sjacinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);

void	ft_c(int *check_print, va_list ap);
void	ft_s(int *check_print, va_list ap);
void	ft_p(char *str, int *check_print, va_list ap);
void	ft_di(int *check_print, va_list ap);
void	ft_u(int *check_print, va_list ap);
void	ft_xX(char *str, int *check_print, va_list ap);

void	ft_putchr(int *check_print, char c);
void	ft_puthex(char *str, int *check_print, unsigned long long int n);
void	ft_putnbr(int *check_print, int n);
void	ft_u_putnbr(int *check_print, unsigned int n);

#endif
