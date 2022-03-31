/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjung <hanjung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 21:39:27 by hanjung           #+#    #+#             */
/*   Updated: 2022/03/31 20:37:23 by hanjung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	tmp;

	i = 0;
	while (big[i] && i < len)
	{
		tmp = 0;
		if (little[tmp] == big[i + tmp])
		{
			while (little[tmp] && big[i + tmp])
			{
				if (little[tmp] != big[i + tmp] || (i + tmp) >= len)
					break ;
				tmp++;
			}
			if (little[tmp] == 0)
				return (&((char *)big)[i]);
		}
		i++;
	}
	return ((void *)0);
}
