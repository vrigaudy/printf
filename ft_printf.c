/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:44:55 by vrigaudy          #+#    #+#             */
/*   Updated: 2021/12/14 20:32:21 by vrigaudy         ###   ########.fr       */
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

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int	main(void)
{
	ft_printf("=========== COMPARE PRINT ===========\n");
	ft_printf("\n------------- LONG_MIN --------------\n");
	ft_printf("ft_printf  ->  %p\n", -2147483647);
	printf("printf     ->  %p\n", 2147483647);
	ft_printf("-------------------------------------\n");
	ft_printf("\n------------- LONG_MAX --------------\n");
	ft_printf("ft_printf  ->  %p\n", -2147483647);
	printf("printf     ->  %p\n", 2147483647);
	ft_printf("-------------------------------------\n");
	ft_printf("\n------------- ULONG_MAX -------------\n");
	ft_printf("ft_printf  ->  %p\n", -2147483647);
	printf("printf     ->  %p\n", 2147483647);
	ft_printf("-------------------------------------\n");
	ft_printf("\n------------ -ULONG_MAX -------------\n");
	ft_printf("ft_printf  ->  %p\n", -2147483647);
	printf("printf     ->  %p\n", 2147483647);
	ft_printf("-------------------------------------\n");
	ft_printf("\n=====================================\n");
	return (0);
}
