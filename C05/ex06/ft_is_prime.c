/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_prime.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <bfranco@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/26 10:39:26 by bfranco       #+#    #+#                 */
/*   Updated: 2022/07/28 11:30:25 by bfranco       ########   odam.nl         */
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

// int	main(void)
// {
// 	printf("%d", ft_is_prime(4567890));
// }
