/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/11 11:49:25 by bfranco       #+#    #+#                 */
/*   Updated: 2022/07/11 17:28:02 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	n;

	n = nb + '0';
	write(1, &n, 1);
}

int	main(void)
{
	ft_putnbr(42 + 48);
}
