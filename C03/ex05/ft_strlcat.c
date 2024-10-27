/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakroud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 12:42:33 by aakroud           #+#    #+#             */
/*   Updated: 2024/08/05 14:25:48 by aakroud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_lent(char *str)
{
	unsigned int	lent;

	lent = 0;
	while (str[lent] != '\0')
	{
		lent++;
	}
	return (lent);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	total_lent;

	i = 0;
	j = 0;
	total_lent = ft_lent(dest) + ft_lent(src);
	while (dest[i] != '\0')
	{
		i++;
	}
	if (size == 0 || size <= ft_lent(dest))
	{
		return (ft_lent(src) + size);
	}
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (total_lent);
}
