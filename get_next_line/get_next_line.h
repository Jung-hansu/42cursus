#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>



#ifndef BUFFER_SIZE
# define BUFFER_SIZE 30
#endif

#ifndef FOPEN_MAX
# define FOPEN_MAX 20
#endif

char	*get_next_line(int fd);

char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *str);
size_t	ft_strlen(const char *str);

#endif