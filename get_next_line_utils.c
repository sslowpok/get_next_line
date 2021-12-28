/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 12:23:49 by sslowpok          #+#    #+#             */
/*   Updated: 2021/11/14 13:06:15 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	if (c == '\0')
		return ((char *)(s + ft_strlen(s)));
	while (s[i])
	{
		if (s[i] == (char) c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*out;

	i = 0;
	if (s1[0] != '\0')
		out = malloc((ft_strlen(s1) + 1) * sizeof(char));
	else
		out = malloc(sizeof(char));
	if (out == NULL)
		return (NULL);
	while (s1[i])
	{
		out[i] = s1[i];
		i++;
	}
	out[i] = '\0';
	return (out);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*out;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	out = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!out)
		return (0);
	while (s1[i])
	{
		out[j++] = s1[i++];
	}
	i = 0;
	while (s2[i])
	{
		out[j++] = s2[i++];
	}
	out[j] = '\0';
	return (out);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!dstsize)
		return (ft_strlen(src));
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
