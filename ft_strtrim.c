/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halnuma <halnuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:17:16 by halnuma           #+#    #+#             */
/*   Updated: 2024/11/11 12:19:31 by halnuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*res;
	int			start;
	size_t		end;
	int			size;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, (unsigned char)s1[start]))
		start++;
	while (ft_strchr(set, (unsigned char)s1[end]))
		end--;
	size = end - start + 2;
	res = malloc(sizeof(char) * size);
	if (!res)
		return (NULL);
	res = (char *)&(s1[start]);
	res[size - 1] = '\0';
	return (res);
}
