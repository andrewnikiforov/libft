/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omillan <omillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 13:04:06 by omillan           #+#    #+#             */
/*   Updated: 2021/04/15 13:21:34 by omillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;
	size_t	k;

	if (!s)
		return (NULL);
	if (ft_strlen(s + start) > len)
		k = len;
	else
		k = ft_strlen(s);
	i = -1;
	str = malloc(sizeof(char) * (k + 1));
	if (!str)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	while (++i < k && *(s + start + i))
		*(str + i) = *(s + start + i);
	*(str + i) = '\0';
	return (str);
}
