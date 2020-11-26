/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omillan <omillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 13:04:06 by omillan           #+#    #+#             */
/*   Updated: 2020/11/26 14:02:55 by omillan          ###   ########.fr       */
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
	k = (ft_strlen(s + start) > len) ? len : ft_strlen(s);
	i = -1;
	if (!(str = malloc(sizeof(char) * (k + 1))))
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	while (++i < k && *(s + start + i))
		*(str + i) = *(s + start + i);
	*(str + i) = '\0';
	return (str);
}
