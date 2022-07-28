/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <bfranco@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/26 09:06:38 by bfranco       #+#    #+#                 */
/*   Updated: 2022/07/28 11:13:42 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		if (i >= 46341)
			return (0);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_sqrt(2147395601));
// }
