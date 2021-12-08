/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 13:17:25 by vrigaudy          #+#    #+#             */
/*   Updated: 2021/12/07 18:32:03 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_dispatch(va_list arg, char c);

int	ft_putnbr_count(int i);
int	ft_putchar_count(char c);
int	ft_putstr_count(char *str);
int	ft_putlongnbr_count(unsigned long long int i);

#endif
