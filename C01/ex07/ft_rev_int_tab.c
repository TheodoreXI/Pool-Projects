/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakroud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 00:12:05 by aakroud           #+#    #+#             */
/*   Updated: 2024/07/29 20:11:21 by aakroud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	j;
	int	tmp;

	j = 0;
	while (j < size - 1)
	{
		tmp = tab[j];
		tab[j] = tab[size - 1];
		tab[size -1] = tmp;
		j++;
		size--;
	}
}
