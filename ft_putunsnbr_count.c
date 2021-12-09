/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsnbr_count.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:21:53 by vrigaudy          #+#    #+#             */
/*   Updated: 2021/12/08 15:00:06 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_countchar(int n)
{
	int	len;

	len = 1;
	while (n >= 9)
	{
	n /= 10;
		len++;
	}
	return (len);
}

int	ft_putunsnbr_count(unsigned int i)
{
	if (!i)
		return (0);
	if (i > 9)
	{
		ft_putlongnbr_count(i / 10);
		ft_putchar_fd(1, i % 10 + '0');
	}
	ft_putchar_fd(1, i + '0');
	return (ft_countchar(i));
}
