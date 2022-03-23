/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjung <hanjung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:05:28 by hanjung           #+#    #+#             */
/*   Updated: 2022/03/23 17:27:07 by hanjung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	strlcpy(char *dest, const char *src, size_t size)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	while (i < len && i < (int)size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = 0;
	return (len);
}
