/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjung <hanjung@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:11:43 by hanjung           #+#    #+#             */
/*   Updated: 2022/04/20 19:11:51 by hanjung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t num)
{
	unsigned char	*temp_dst;
	unsigned char	*temp_src;
	size_t			i;

	temp_dst = dst;
	temp_src = (unsigned char *)src;
	i = 0;
	while (i < num)
	{
		temp_dst[i] = temp_src[i];
		if (temp_src[i] == (unsigned char)c)
		{
			return (&dst[i + 1]);
		}
		i++;
	}
	return (0);
}
