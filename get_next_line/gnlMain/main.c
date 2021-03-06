#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	char	*line;
	int		i;
	int		fd1, fd2, fd3;

	fd1 = open("test.txt", O_RDONLY);
	fd2 = open("test2.txt", O_RDONLY);
	fd3 = open("test3.txt", O_RDONLY);
	i = 0;
	while (i <= 7)
	{
		line = get_next_line(fd1);
		printf("line [%02d]: %s", i, line);
		line = get_next_line(fd2);
		printf("line [%02d]: %s", i, line);
		line = get_next_line(fd3);
		printf("line [%02d]: %s", i, line);
		printf("\n");
		i++;
	}
	free(line);
	close(fd1); 
	close(fd2);
	close(fd3);
	system("leaks a.out");
	return (0);
}