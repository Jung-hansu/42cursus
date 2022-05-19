/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjung <hanjung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:08:59 by hanjung           #+#    #+#             */
/*   Updated: 2022/05/19 17:05:18 by hanjung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	result = malloc(size * count);
	if (!size || !count)
		return (malloc(0));
	if (count > SIZE_MAX / size)
		return (malloc(SIZE_MAX));
	if (result)
		ft_bzero(result, size * count);
	return (result);
}