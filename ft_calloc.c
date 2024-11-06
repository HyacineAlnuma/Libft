/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halnuma <halnuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:43:18 by halnuma           #+#    #+#             */
/*   Updated: 2024/11/06 15:34:51 by halnuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;
	int		bytes_nb;

	bytes_nb = nmemb * size;
	res = malloc(bytes_nb);
	if (!res)
		return (NULL);
	ft_bzero(res, bytes_nb);
	return (res);
}