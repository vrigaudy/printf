/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dispatch.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 19:31:43 by vrigaudy          #+#    #+#             */
/*   Updated: 2021/12/13 18:55:20 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_dispatch(va_list arg, char c, int *count)
{
	char	*basemaj;
	char	*basemin;
	char	*basedec;

	basedec = "0123456789";
	basemaj = "0123456789ABCDEF";
	basemin = "0123456789abcdef";
	if (c == 'c')
		ft_putchar(va_arg(arg, int), count);
	if (c == 's')
		ft_putstr(va_arg(arg, char *), count);
	if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(arg, int), count);
	if (c == 'u')
		ft_putnbr_base(va_arg(arg, unsigned long long int), basedec, count);
	if (c == 'X')
		ft_putnbr_base(va_arg(arg, unsigned long long int), basemaj, count);
	if (c == 'x' || c == 'p')
	{
		if (c == 'p')
			ft_putstr("0x", count);
		ft_putnbr_base(va_arg(arg, unsigned long long int), basemin, count);
	}
	if (c == '%')
		ft_putchar('%', count);
}
