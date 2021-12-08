/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:27:51 by vrigaudy          #+#    #+#             */
/*   Updated: 2021/12/08 13:15:24 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_count(int i)
{
	char	*str;
	int		len;

	str = ft_itoa(i);
	len = ft_strlen(str);
	ft_putstr_fd(1, str);
	free(str);
	return (len);
}
