/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <bfranco@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/28 15:14:11 by bfranco       #+#    #+#                 */
/*   Updated: 2022/07/28 17:04:10 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	n;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	ptr = malloc(sizeof(int) * (max - min));
	if (ptr == NULL)
		return (0);
	n = min;
	while (n < max)
	{
		ptr[i] = n;
		i++;
		n++;
	}
	return (ptr);
}

// int	main(void)
// {
// 	int	*n;
// 	int	i;
// 	int	min;
// 	int	max;

// 	i = 0;
// 	min = 1;
// 	max = 9;
// 	n = ft_range(min, max);
// 	while (i < max - min)
// 	{
// 		printf("%d", n[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	free(n);
// }
