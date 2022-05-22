/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjung <hanjung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 15:21:18 by hanjung           #+#    #+#             */
/*   Updated: 2022/05/22 18:13:43 by hanjung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

static int	set_form(const char **format, va_list ap)
{
	if (**format == 'c')
		ft_putchar_fd(ap, 1);
	else if (**format == 's')
		ft_putstr_fd(ap, 1);
	else if (**format == 'p')
		;
	else if (**format == 'd' || **format == 'i')
		ft_putnbr_fd(ap, 1);
	else if (**format == 'o')

	(*format)++;
	
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		res_len;
	int		read_form;

	res_len = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format++, 1);
			res_len++;
		}
		else
		{
			++format;
			read_form = set_form(&format, ap); //format parsing 필요
			if (read_form < 0)
				return (-1);
			res_len += read_form;
		}
	}
	va_end(ap);
	return (res_len);
}