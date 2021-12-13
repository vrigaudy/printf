/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:55:08 by vrigaudy          #+#    #+#             */
/*   Updated: 2021/12/13 19:11:24 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned long long int i, char *base, int *count)
{
	if (i >= (unsigned long long int)ft_strlen(base))
	{
		ft_putnbr_base(i / ft_strlen(base), base, count);
		ft_putnbr_base(i % ft_strlen(base), base, count);
	}
	else
		ft_putchar(base[i], count);
}
