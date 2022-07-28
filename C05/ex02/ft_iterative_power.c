/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <bfranco@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/24 15:11:56 by bfranco       #+#    #+#                 */
/*   Updated: 2022/07/28 10:30:40 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	num;

	num = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power > 1)
		{
			num *= nb;
			power--;
		}
	}
	return (num);
}

// int	main(void)
// {
// 	printf("%d", ft_iterative_power(5, 12));
// }
