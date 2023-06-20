/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   create_matrix.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <bfranco@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/19 20:57:35 by bfranco       #+#    #+#                 */
/*   Updated: 2023/06/19 21:27:53 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	**create_matrix(int size)
{
	int	**matrix;
	int	i;
	int	j;

	i = 0;
	matrix = (int **)malloc(sizeof(int *) * size);
	if (!matrix)
		return (NULL);
	while (i < size)
	{
		matrix[i] = (int *)malloc(sizeof(int) * size);
		if (!matrix[i])
			return (ft_free_arr(matrix, i), NULL);
		i++;
	}
	i = 0;
	while (i < size)
	{
		j = -1;
		while (++j < size)
			matrix[i][j] = 0;
		i++;
	}
	return (matrix);
}
