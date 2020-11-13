/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omillan <omillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 14:35:59 by omillan           #+#    #+#             */
/*   Updated: 2020/11/10 11:53:03 by omillan          ###   ########.fr       */
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
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	i = -1;
	j = -1;
	if (!(str = (char *)malloc(len * sizeof(char))))
		return (NULL);
	while (++i < len && *(s1 + i))
		*(str + i) = *(s1 + i);
	while (i + ++j < len - 1 && *(s2 + j))
		*(str + i + j) = *(s2 + j);
	*(str + i + j) = '\0';
	return (str);
}
