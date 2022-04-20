/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjung <hanjung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:13:54 by hanjung           #+#    #+#             */
/*   Updated: 2022/04/20 20:37:02 by hanjung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int character)
{
	char	find;
	int		i;

	find = (unsigned int)character;
	i = 0;
	while (str[i])
	{
		if (str[i] == find)
		{
			return ((char *)str + i);
		}
		i++;
	}
	if (str[i] == find)
	{
		return ((char *)str + i);
	}
	return (0);
}
