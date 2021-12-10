/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexamin_count.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <vrigaudy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:23:29 by vrigaudy          #+#    #+#             */
/*   Updated: 2021/12/10 22:53:16 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

static char	*ft_itoahexa(long int nb)
{
	char	str[10];
	
	if (nb > 15)
		ft_
	return
}

int	ft_puthexamin_count(int i)
{
	char		str[10];
	long int	nb;

	nb = i;
	if (i < 0)
	{
	   nb = -i;
	   *str = '-';
	   str++;
	}
	str = ft_itoahexa(nb);
	ft_putstr_fd(1, str);
	return (ft_strlen(str));
}
