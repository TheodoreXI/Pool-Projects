/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakroud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:51:25 by aakroud           #+#    #+#             */
/*   Updated: 2024/08/14 17:04:30 by aakroud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	int	i;

	i = 0;
	if (base[0] == '\0' || ft_lent(base) <= 1)
		return (1);
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+'
			|| base[i] == 32 || (base[i] >= 9 && base[i] <= 13))
			return (1);
		i++;
	}
	return (0);
}

int	ft_error(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_calindex(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	n;
	int	i;
	int	sign;
	int	digital_number;

	i = 0;
	sign = 1;
	n = 0;
	if (ft_error(base) == 1 || ft_error0(base) == 1)
		return (0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i] == '-')
			sign *= -1;
	i++;
	while (str[i] != '\0')
	{
		digital_number = ft_calindex(base, str[i]);
		if (digital_number == -1)
			return (0);
		n = (n * ft_lent(base)) + digital_number;
		i++;
	}
	return (n * sign);
}
