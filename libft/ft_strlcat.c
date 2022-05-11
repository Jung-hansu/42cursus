/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjung <hanjung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:14:38 by hanjung           #+#    #+#             */
/*   Updated: 2022/05/11 14:35:56 by hanjung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	dst_len;
	size_t	result;
	size_t	i;

	dst_len = ft_strlen(dst);
	result = ft_strlen(src);
	i = 0;
	if (len <= dst_len)
		return (result + len);
	while (src[i] && i < (len - dst_len - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = 0;
	result += dst_len;
	return (result);
}
