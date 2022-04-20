/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjung <hanjung@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:06:55 by hanjung           #+#    #+#             */
/*   Updated: 2022/04/20 19:07:05 by hanjung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(char s)
{
	if ((s >= 9 && s <= 13) || s == ' ')
		return (1);
	return (0);
}

static int	isnum(char s)
{
	if (s >= '0' && s <= '9')
		return (1);
	return (0);
}

static int	issign(char s)
{
	if (s == '+' || s == '-')
		return (1);
	return (0);
}

static long long int	calnum(char *str, int sign)
{
	long long int	num;
	int				digit;

	digit = 0;
	num = 0;
	while (isnum(*str))
	{
		num = num * 10;
		num += (*str - '0');
		str++;
		digit++;
		if (num < 0 || digit == 19)
		{
			if (sign > 0)
				return (-1);
			else
				return (0);
		}
	}
	return (num);
}

int	ft_atoi(char *s)
{
	int				sign;
	int				cnt;
	long long int	num;
	int				digit;

	sign = 1;
	cnt = 0;
	num = 0;
	digit = 0;
	while (ft_isspace(*s))
		s++;
	while (issign(*s))
	{
		if (*s++ == '-')
			sign *= -1;
		cnt++;
	}
	if (cnt > 1)
		return (0);
	num = calnum((char *)s, sign);
	return (num * sign);
}
