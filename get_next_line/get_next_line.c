#include "get_next_line.h"

char	*ft_free(char **line)
{
	free(*line);
	return (NULL);
}

int	find_newline(char *str)
{
	int idx;

	idx = 0;
	while (str[idx] != '\n' && str[idx] != '\0')
		idx++;
	if (str[idx] == '\n')
			return (idx);
	return (-1);
}

void	ft_cut(char str[], size_t n)
{
	size_t i;

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
	
}

char	*get_next_line(int fd)
{
	static char buf[BUFFER_SIZE + 1];
	char *line;
	int n;

	if (fd < 0 || fd > FOPEN_MAX || BUFFER_SIZE <= 0)
		return (NULL);
	line = ft_strjoin(NULL, buf);
	if (!line)
		return (ft_free(&line));
	
}