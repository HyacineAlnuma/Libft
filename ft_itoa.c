/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halnuma <halnuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:57:23 by halnuma           #+#    #+#             */
/*   Updated: 2024/11/11 13:27:00 by halnuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_malloc_size(int n)
{
	int		div;
	int		size;

	div = n;
	size = 0;
	if (n < 0)
	{
		size++;
		div *= -1;
	}
	while (div > 0)
	{
		size++;
		div /= 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		div;
	int		size;
	int		i;

	size = get_malloc_size(n);
	res = malloc(sizeof(char) * size + 1);
	if (!res)
		return (NULL);
	div = n;
	if (n < 0)
		div *= -1;
	i = size - 1;
	while (i >= 0)
	{
		res[i] = (div % 10) + '0';
		div /= 10;
		i--;
	}
	if (n < 0)
		res[0] = '-';
	res[size] = '\0';
	return (res);
}

// int	main(void)
// {
// 	int n = 2143433;
// 	char *res;

// 	res = ft_itoa(n);
// 	printf("%s", res);
// }
