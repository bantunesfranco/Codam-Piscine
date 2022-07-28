/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_range.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <bfranco@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/28 15:14:11 by bfranco       #+#    #+#                 */
/*   Updated: 2022/07/28 17:04:38 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	n;
	int	i;
	int	*arr;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	arr = malloc(sizeof(int) * (max - min));
	if (arr == NULL)
	{
		*range = 0;
		return (-1);
	}
	n = min;
	while (n < max)
	{
		arr[i] = n;
		i++;
		n++;
	}
	*range = arr;
	return (max - min);
}

// int	main(void)
// {
// 	int	i;
// 	int	min;
// 	int	max;
// 	int	*range;

// 	i = 0;
// 	min = 1;
// 	max = 9;
// 	ft_ultimate_range(&range, min, max);
// 	while (i < max - min)
// 	{
// 		printf("%d", range[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	free(range);
// }
