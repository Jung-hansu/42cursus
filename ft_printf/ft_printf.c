/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjung <hanjung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 15:21:18 by hanjung           #+#    #+#             */
/*   Updated: 2022/07/23 17:45:44 by hanjung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	set_form(const char *s, va_list ap)
{
	if (!s)
		return (-1);
	while (*s != DTYPE)
	{

	}
}

int	ft_printf(const char *s, ...)
{
	int		ret;
	int		read_form;
	va_list	ap;

	ret = 0;
	va_start(ap, s);
	while (*s)
	{
		if (*s != '%'){
			ft_putchar_fd(*s, 1);
			ret++;
			s++;
		}
		else
		{
			read_form = set_form(&s, ap); //format parsing 필요
			if (read_form < 0)
			{
				ret = -1;
				break ;
			}
			ret += read_form;
		}
	}
	va_end(ap);
	return (ret);
}