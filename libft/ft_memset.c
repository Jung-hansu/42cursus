/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjung <hanjung@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:55:55 by hanjung           #+#    #+#             */
/*   Updated: 2022/03/09 16:56:28 by hanjung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	char	*tmp;

	tmp = (char *)ptr;
	while (num--)
		*(tmp++) = value;
	return (ptr);
}
