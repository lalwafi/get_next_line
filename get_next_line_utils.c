/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 10:35:39 by lalwafi           #+#    #+#             */
/*   Updated: 2024/05/06 19:34:11 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strchr(char *line, int c)
{
	int	i;

	i = 0;
	if (!line)
		return (0);
	if (c == 0)
		return (0);
	while (line[i])
	{
		if (line[i] == (char)c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *buffer, char *line)
{
	size_t	i;
	size_t	j;
	char	*new;

	i = 0;
	j = 0;
	if (!buffer)
	{
		buffer = malloc(sizeof(char) * 1);
		buffer[0] = '\0';
	}
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
		new[i++] = line[j++];
	new[i] = '\0';
	if (buffer)
		free(buffer);
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
