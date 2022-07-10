/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjung <hanjung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 19:27:02 by hanjung           #+#    #+#             */
/*   Updated: 2022/07/10 16:27:14 by hanjung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_free(char **line);
void	ft_cut(char str[], size_t n);
char	*get_line(char buf[], char **line, int n);
char	*get_next_line(int fd);

char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *str);
size_t	ft_strlen(const char *str);
int	find_newline(char *str);
int	find_end(char *str);

#endif