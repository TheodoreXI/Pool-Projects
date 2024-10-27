/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakroud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:09:38 by aakroud           #+#    #+#             */
/*   Updated: 2024/08/06 18:10:09 by aakroud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_prime(int nb)
{
	int	k;

	k = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (k < nb)
	{
		if (nb % k == 0)
		{
			return (0);
		}
		k++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb <= 2147483647)
	{
		if (ft_find_prime(nb) == 1)
		{
			return (nb);
		}
		nb++;
	}
	return (0);
}
