/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halnuma <halnuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:56:27 by halnuma           #+#    #+#             */
/*   Updated: 2024/11/11 15:33:43 by halnuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**create_final_array(const char *str, char c)
{
	size_t		i;
	int			parts;
	int			last_sep;
	char		**res;

	last_sep = 0;
	parts = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c || i == (ft_strlen(str) - 1))
		{
			if (i - last_sep > 1)
				parts++;
			last_sep = i;
		}
		i++;
	}
	res = malloc(sizeof(char *) * (parts + 1));
	if (!res)
		return (NULL);
	return (res);
}

static char	*ft_strndup(const char *src, int size)
{
	char	*dest;
	int		i;

	dest = (char *)malloc((sizeof(char) * size) + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;
	int		last_sep;

	i = 0;
	j = -1;
	last_sep = 0;
	res = create_final_array(s, c);
	if (!res)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
		{
			if ((i - last_sep) > 0)
				res[++j] = ft_strndup(&s[last_sep], (i - last_sep));
			last_sep = i + 1;
		}
		i++;
	}
	if ((i - last_sep) > 0)
		res[++j] = ft_strndup((char *)&s[last_sep], (i - last_sep));
	res[++j] = NULL;
	return (res);
}
