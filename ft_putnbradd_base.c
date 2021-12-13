/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbradd_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 22:31:25 by vrigaudy          #+#    #+#             */
/*   Updated: 2021/12/13 22:49:28 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbradd_base(unsigned long int i, char *base, int *count)
{
	if (i >= (unsigned long int)ft_strlen(base))
	{
		ft_putnbr_base(i / ft_strlen(base), base, count);
		ft_putnbr_base(i % ft_strlen(base), base, count);
	}
	else
		ft_putchar(base[i], count);
}
