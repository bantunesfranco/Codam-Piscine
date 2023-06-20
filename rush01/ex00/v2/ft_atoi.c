/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <bfranco@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/19 19:24:42 by bfranco       #+#    #+#                 */
/*   Updated: 2023/06/19 21:13:03 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	ft_atoi(char *str)
{
	int	i;
	long	nbr;

	if (!str)
		return (-1);
	i = 0;
	nbr = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (-1);
		nbr = nbr * 10 + (str[i] - 48);
		if (nbr > INT_MAX)
			return (-1);
		i++;
	}
	return ((int)nbr);
}
