/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halnuma <halnuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:28:07 by halnuma           #+#    #+#             */
/*   Updated: 2024/11/05 17:14:37 by halnuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	sign = 1;
	i = 0;
	if (nptr[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (isdigit(nptr[i]))
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}