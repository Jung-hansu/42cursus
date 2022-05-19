/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjung <hanjung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:12:07 by hanjung           #+#    #+#             */
/*   Updated: 2022/05/19 21:05:23 by hanjung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t num)
{
	unsigned char	*tmp_ptr;
	unsigned char	find;
	unsigned int	i;

	tmp_ptr = (unsigned char *)ptr;
	find = (unsigned char)c;
	i = 0;
	while (i < num)
	{
		if (tmp_ptr[i] == find)
			return (&tmp_ptr[i]);
		i++;
	}
	return (0);
}
