/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dispatch.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 19:31:43 by vrigaudy          #+#    #+#             */
/*   Updated: 2021/12/08 14:59:28 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_dispatch(va_list arg, char c)
{
	int	count;

	if (c == 'c')
		count = ft_putchar_count(va_arg(arg, char c));
	if (c == 's')
		count = ft_putstr_count(va_arg(arg, char *str));
	if (c == 'p')
		count = ft_putlongnbr_count(va_arg(arg, unsigned long long int i));
	if (c == 'd' || c == 'i')
		count = ft_putnbr_count(va_arg(arg, int i));
	if (c == 'u')
		count = ft_putunsnbr_count(va_arg(arg, unsigned int i));
	if (c == 'X')
		count = ft_puthexamaj_count(va_arg(arg, int i));
	if (c == 'x')
		count = ft_puthexamin_count(va_arg(arg, int i));
	if (c == '%')

	return (count);
}
