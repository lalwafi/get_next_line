/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 10:35:39 by lalwafi           #+#    #+#             */
/*   Updated: 2024/04/18 13:49:16 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *line, int c)
{
	if (!line)
		return (NULL);
	while (*line != '\0')
	{
		if (*line == (char)c)
			return ((char *)line);
		line++;
	}
	return (NULL);
}

char	*ft_strjoin(char const *buffer, char const *line)
{
	size_t	i;
	size_t	j;
	char	*new;

	i = 0;
	j = 0;
	if (!buffer && !line)
		return (NULL);
	new = (char *)malloc(sizeof(char) * (ft_strlen(buffer) + ft_strlen(line) + 1));
	if (!new)
		return (0);
	while (buffer[i])
	{
		new[i] = buffer[i];
		i++;
	}
	while (line[j])
	{
		new[i] = line[j];
		i++;
		j++;
	}
	new[i] = '\0';
	return (new);
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}
