/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjung <hanjung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:18:47 by hanjung           #+#    #+#             */
/*   Updated: 2022/05/19 21:05:38 by hanjung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*ret;
	size_t	t;
	size_t	slen;

	t = 0;
	slen = 0;
	if (str == NULL)
		return (NULL);
	slen = ft_strlen(str);
	if (slen < start)
		return (ft_strdup(""));
	if (start + len > slen)
		len = slen - start;
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (ret == 0)
		return (NULL);
	while (t < len && start + t < slen)
	{
		ret[t] = str[start + t];
		t++;
	}
	ret[t] = '\0';
	return (ret);
}
