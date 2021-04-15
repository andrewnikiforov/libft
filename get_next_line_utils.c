/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omillan <omillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 14:59:09 by omillan           #+#    #+#             */
/*   Updated: 2021/04/15 13:26:25 by omillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *s1)
{
	char	*rez;
	int		i;
	int		j;

	j = -1;
	if (!s1)
		return (0);
	i = ft_strlen(s1);
	rez = malloc((i + 1) * sizeof(char));
	if (!rez)
		return (NULL);
	while (++j < i)
		rez[j] = s1[j];
	rez[j] = '\0';
	return (rez);
}

char	*ft_strchr(char *s, char c)
{
	int	i;

	if (!s)
		return (0);
	i = -1;
	if (c == 0)
		return (s + ft_strlen(s));
	while (s[++i])
		if (s[i] == c)
			return (s + i);
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		j;
	int		len;

	if (!s1 || !s2)
		return (NULL);
	len = 0;
	if (s1)
		len = ft_strlen(s1);
	if (s2)
		len += ft_strlen(s2);
	i = -1;
	j = -1;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (++i < (len + 1) && *(s1 + i))
		*(str + i) = *(s1 + i);
	while (i + ++j < len && *(s2 + j))
		*(str + i + j) = *(s2 + j);
	*(str + i + j) = '\0';
	free(s1);
	return (str);
}
