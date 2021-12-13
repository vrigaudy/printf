/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:44:55 by vrigaudy          #+#    #+#             */
/*   Updated: 2021/12/13 22:13:47 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		count;

	if (!str)
		return (0);
	count = 0;
	va_start(arg, str);
	while (*str)
	{
		if (*str == '%')
		{
			ft_dispatch(arg, *(str + 1), &count);
			str += 2;
		}
		else
		{
			ft_putchar(*str, &count);
			str++;
		}
	}
	va_end(arg);
	return (count);
}
/*
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int	main(void)
{
	unsigned long long int	s;
	int				i;
	int				j;

	s = 18446744073709551615;
	ft_printf("=== COMPARE PRINT ===\n");
	ft_printf("ft_printf -> ");
	i = ft_printf("%u\n", s);
	printf("printf    -> ");
	j = printf("%u\n", s);
	ft_printf("=== RETURN PRINTF ===\n");
	printf("ft_printf -> %d\nprintf    -> %d\n", i, j);
	ft_printf("=== RETURN FT_PRINTF ===\n");
	ft_printf("ft_printf -> %d\nprintf    -> %d", i, j);
	return (0);
}
*/
