/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <bfranco@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/24 15:11:56 by bfranco       #+#    #+#                 */
/*   Updated: 2022/07/25 14:31:13 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	multiplier;

	multiplier = 1;
	i = 0;
	nb = 0;
	while (str[i] <= 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			multiplier *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	nb *= multiplier;
	return (nb);
}

// int	main(void)
// {
// 	char	*str = " ---+---+1234ab567";

// 	printf("%d\n", ft_atoi(str));
// 	printf("%d\n", atoi(str));
// }
