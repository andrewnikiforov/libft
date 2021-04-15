/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omillan <omillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 14:35:59 by omillan           #+#    #+#             */
/*   Updated: 2021/04/14 15:42:23 by omillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
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
	return (str);
}
