/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjung <hanjung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:13:12 by hanjung           #+#    #+#             */
/*   Updated: 2022/05/19 21:05:28 by hanjung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*temp;
	size_t			i;

	temp = ptr;
	i = 0;
	while (i < num)
	{
		temp[i] = value;
		i++;
	}
	return (ptr);
}
