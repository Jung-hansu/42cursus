/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjung <hanjung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 19:26:40 by hanjung           #+#    #+#             */
/*   Updated: 2022/07/10 16:27:15 by hanjung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_free(char **line)
{
	free(*line);
	return (NULL);
}

void	ft_cut(char str[], size_t n)
{
	size_t	i;

	i = 0;
	while (n < BUFFER_SIZE)
	{
		str[i] = str[n];
		n++;
		i++;
	}
	while (i < BUFFER_SIZE)
	{
		str[i] = 0;
		i++;
	}
}

char	*get_line(char buf[], char **line, int n)
{
	if (find_newline(buf) != ft_strlen(buf))
	{
		ft_cut(buf, find_newline(buf) + 1);
		if (find_end(*line) || ft_strlen(*line))
			return (*line);
	}
	else if (find_newline(buf) == ft_strlen(buf))
	{
		while (n < BUFFER_SIZE)
		{
			buf[n] = 0;
			n++;
		}
		if (find_end(*line) || ft_strlen(*line))
			return (*line);
	}
	return (ft_free(line));
}

char	*get_next_line(int fd)
{
	static char	buf[BUFFER_SIZE + 1];
	char	*line;
	int	n;

	if (fd < 0 || fd > FOPEN_MAX || BUFFER_SIZE <= 0)
		return (NULL);
	line = ft_strjoin(NULL, buf);
	if (!line)
		return (ft_free(&line));
	if (find_newline(buf) != ft_strlen(buf))
		return (get_line(buf, &line, 0));
	n = BUFFER_SIZE;
	while (n == BUFFER_SIZE && !find_end(buf))
	{
		n = read(fd, buf, BUFFER_SIZE);
		if (n < 0)
			return (ft_free(&line));
		buf[n] = 0;
		line = ft_strjoin(line, buf);
		if (!line)
			return (ft_free(&line));
		if (n == BUFFER_SIZE)
			n = find_newline(buf);
	}
	return (get_line(buf, &line, 0));
}
