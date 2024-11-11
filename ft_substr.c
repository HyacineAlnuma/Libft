/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halnuma <halnuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:39:02 by halnuma           #+#    #+#             */
/*   Updated: 2024/11/11 12:05:16 by halnuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	size_t			size;
	char			*res;

	i = start;
	while (s[i])
		i++;
	if (i < len)
		size = i + 1;
	else
		size = len + 1;
	res = malloc(sizeof(char) * size);
	if (!res)
		return (NULL);
	res = (char *)&(s[start]);
	res[size - 1] = '\0';
	return (res);
}
