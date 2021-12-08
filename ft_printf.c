/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:44:55 by vrigaudy          #+#    #+#             */
/*   Updated: 2021/12/08 16:29:50 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_prinft(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		count;

	if (!str)
		return (0);
	i = 0;
	count = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			count += ft_dispatch(arg, str[i + 1]);
			str += 2;
		}
		else
			ft_putchar_fd(str[i], 1);
		i++;
	}
	va_end(arg, str);
	return (count + i);
}
