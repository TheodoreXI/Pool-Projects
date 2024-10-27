/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakroud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:52:50 by aakroud           #+#    #+#             */
/*   Updated: 2024/08/12 12:48:52 by aakroud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <unistd.h>

typedef enum boolean
{
	FALSE,
	TRUE,
}	t_bool;

#define TRUE 1
#define FALSE 0

#define EVEN(nbr) ((nbr) % 2 == 0)

#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"

#define SUCCESS 0
