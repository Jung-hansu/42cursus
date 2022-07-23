/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjung <hanjung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:26:02 by hanjung           #+#    #+#             */
/*   Updated: 2022/07/23 17:45:42 by hanjung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "libft/libft.h"

typedef struct{
	int sharp;
	int zero;
	int space;
	int upper;
	int plus;
	int minus;
}flag;


int	ft_printf(const char *s, ...);

#endif