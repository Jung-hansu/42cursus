/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjung <hanjung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:08:59 by hanjung           #+#    #+#             */
/*   Updated: 2022/04/20 21:50:48 by hanjung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t size, size_t count)
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
