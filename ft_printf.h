/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 13:17:25 by vrigaudy          #+#    #+#             */
/*   Updated: 2021/12/13 19:08:31 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_strlen(const char *str);
int	ft_printf(const char *str, ...);

void	ft_putnbr(int i, int *count);
void	ft_putchar(char c, int *count);
void	ft_putstr(char *str, int *count);
void	ft_dispatch(va_list arg, char c, int *count);
void	ft_putnbr_base(unsigned long long int i, char *base, int *count);

#endif
