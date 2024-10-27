/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakroud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 14:00:00 by aakroud           #+#    #+#             */
/*   Updated: 2024/08/10 14:00:35 by aakroud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (min >= max)
	{
		return (0);
	}
	range[i] = (int *)malloc(sizeof(int) * (max - min));
	if (range[i] == NULL)
	{
		return (-1);
	}
	while (min < max)
	{
		range[i][j] = min;
		min++;
		j++;
	}
	return (j);
}
