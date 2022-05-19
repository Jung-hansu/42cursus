/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjung <hanjung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:13:01 by hanjung           #+#    #+#             */
/*   Updated: 2022/05/19 21:05:27 by hanjung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t num)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;
	unsigned int	i;

	if (!dst && !src)
		return (dst);
	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	i = 0;
	if (dst < src)
	{
		while (i++ < num)
		{
			tmp_dst[i - 1] = tmp_src[i - 1];
		}
	}
	else
	{
		while (i < num)
		{
			tmp_dst[num - 1 - i] = tmp_src[num - 1 - i];
			i++;
		}
	}
	return (dst);
}
