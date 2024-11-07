/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halnuma <halnuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:17:58 by halnuma           #+#    #+#             */
/*   Updated: 2024/11/07 13:16:18 by halnuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char src[4] = {'1', '2', '3', '4'};
// 	char dest[4];

// 	memcpy(dest, src, 1);
// 	for(int i = 0; i < 4; i++)
// 		printf("%c", dest[i]);
// }