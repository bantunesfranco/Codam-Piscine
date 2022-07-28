/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_find_next_prime.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <bfranco@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/26 11:29:48 by bfranco       #+#    #+#                 */
/*   Updated: 2022/07/28 11:30:01 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2)
		return (0);
	while (n <= nb / n)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	n;

	n = nb;
	if (nb < 2)
		return (2);
	while (ft_is_prime(n) != 1)
		n++;
	return (n);
}

// int	main(void)
// {
// 	printf("%d ", ft_find_next_prime(4567));
// }
