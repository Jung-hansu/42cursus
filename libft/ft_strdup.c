/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjung <hanjung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:54:05 by hanjung           #+#    #+#             */
/*   Updated: 2022/03/31 21:01:29 by hanjung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*p;
	int		len;
	int		i;

	len = ft_strlen(src);
	p = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (src[i])
		p[i] = src[i++];
	p[i] = 0;
	return (p);
}
