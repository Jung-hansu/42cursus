/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjung <hanjung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:28:26 by hanjung           #+#    #+#             */
/*   Updated: 2022/03/31 20:37:18 by hanjung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	set_num(char *arr, int index)
{
	int	i;
	int	j;
	int	int_num;

	i = 0;
	j = 0;
	int_num = 0;
	if (!(arr[index] >= '0' && arr[index] <= '9'))
		return (0);
	while (arr[index + i] >= '0' && arr[index + i] <= '9')
		i++;
	while (j < i)
	{
		int_num = int_num * 10 + arr[index + j] - '0';
		j++;
	}
	return (int_num);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	return (sign * set_num(str, i));
}
