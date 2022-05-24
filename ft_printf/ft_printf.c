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

static int	set_form(const char **s, va_list ap)
{
	if (!(*s))
		return (-1);
	if (**s == '#')
		
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		res_len;
	int		read_form;

	res_len = 0;
	va_start(ap, s);
	while (*s)
	{
		if (*s != '%')
			res_len += write(1, s++, 1);
		else
		{
			
			read_form = set_form(&s, ap); //format parsing 필요
			if (read_form < 0)
				return (-1);
			res_len += read_form;
		}
	}
	va_end(ap);
	return (res_len);
}
