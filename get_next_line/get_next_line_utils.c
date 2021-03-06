/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjung <hanjung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 19:26:46 by hanjung           #+#    #+#             */
/*   Updated: 2022/07/23 15:50:11 by hanjung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*res;
	unsigned int	i;
	unsigned int	j;

	if (!s2)
		return (0);
	res = malloc(sizeof(char) * (ft_strlen(s1) + find_newline(s2) + 2));
	if (!res)
		return (0);
	i = ft_strlen(s1);
	j = 0;
	ft_memcpy(res, s1, i);
	while (*(s2 + j))
	{
		*(res + i + j) = *(s2 + j);
		j++;
		if (*(s2 + j - 1) == '\n')
			break ;
	}
	*(res + i + j) = 0;
	free((void *)s1);
	return (res);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr_src;
	unsigned char	*ptr_dest;

	i = 0;
	ptr_src = (unsigned char *)src;
	ptr_dest = (unsigned char *)dest;
	if (ptr_src == ptr_dest)
		return (0);
	while (i < n)
	{
		*(ptr_dest + i) = *(ptr_src + i);
		i++;
	}
	return (dest);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

size_t	find_newline(char const *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (i);
}

int	find_end(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}
