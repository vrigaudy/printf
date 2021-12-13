/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:14:20 by vrigaudy          #+#    #+#             */
/*   Updated: 2021/12/13 17:18:56 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunnbr(unsigned int i, int *count)
{
	if (i > 9)
	{
		ft_putunnbr(i / 10, count);
		ft_putunnbr(i % 10, count);
	}
	else
		ft_putchar(i + '0', count);
}
