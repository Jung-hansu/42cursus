/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjung <hanjung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 19:26:46 by hanjung           #+#    #+#             */
/*   Updated: 2022/06/18 19:27:15 by hanjung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*result;
	unsigned int	i;
	unsigned int	j;

	if (s1 == 0 || s2 == 0)
		return (0);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	result = malloc(sizeof(char) * (i + j + 1));
	if (result == 0)
		return (0);
	i = -1;
	j = -1;
	while (s1[++i] != '\0')
		result[i] = s1[i];
	while (s2[++j] != '\0')
		result[i++] = s2[j];
	result[i] = '\0';
	return (result);
}

char	*ft_strdup(const char *str)
{
	int		i;
	int		len;
	char	*new;

	i = 0;
	len = 0;
	while (str[len])
	{
		len++;
	}
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!(new))
		return (NULL);
	while (str[i])
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	find_newline(char *str)
{
	int idx;

	idx = 0;
	while (str[idx] != '\n' && str[idx] != '\0')
		idx++;
	return (idx);
}

int	find_end(char *str)
{
	int idx;

	idx = 0;
	while (!str[idx])
		idx++;
	return idx;
}