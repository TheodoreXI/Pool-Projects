/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakroud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 20:30:20 by aakroud           #+#    #+#             */
/*   Updated: 2024/08/14 16:23:05 by aakroud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_lent(char *str)
{
	int	lent;

	lent = 0;
	while (str[lent] != '\0')
	{
		lent++;
	}
	return (lent);
}

int	ft_error0(char *base)
{
	int	k;
	int	j;

	k = 0;
	while (base[k] != '\0' && (k < ft_lent(base) - 1))
	{
		j = k + 1;
		while (j < ft_lent(base))
		{
			if (base[k] == base[j])
			{
				return (1);
			}
			j++;
		}
		k++;
	}
	return (0);
}

int	ft_error(char *base)
{
	int	i;

	i = 0;
	if (base[i] == '\0' || ft_lent(base) <= 1)
	{
		return (1);
	}
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
		{
			return (1);
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			lent_base;
	long int	k;

	k = 0;
	lent_base = ft_lent(base);
	if (ft_error(base) == 1 || ft_error0(base) == 1)
	{
		return ;
	}
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		k = (long int)2147483647 + 1;
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		k = (long int)-nbr;
	}
	else
		k = (long int)nbr;
	if (k >= lent_base)
		ft_putnbr_base(k / lent_base, base);
	write(1, &(base[k % lent_base]), 1);
}
