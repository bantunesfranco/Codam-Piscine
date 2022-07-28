/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <bfranco@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/25 15:56:26 by bfranco       #+#    #+#                 */
/*   Updated: 2022/07/28 10:10:36 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	i;

	i = 1;
	factorial = 1;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb > 1)
	{
		while (i <= nb)
		{
			factorial *= i;
			i++;
		}
	}
	if (nb >= 0)
		return (factorial);
	else
		return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_iterative_factorial(1));
// }
