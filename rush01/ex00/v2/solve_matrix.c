/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   solve_matrix.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <bfranco@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/19 21:28:20 by bfranco       #+#    #+#                 */
/*   Updated: 2023/06/20 06:00:29 by codespace     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"


void	fill_clues2(int **matrix, int **input_arr, int size)
{
	int	i;
	int	j;
	int	k;

	i = 2;
	while (i < 4)
	{
		j = 0;
		while (j < size)
		{
			if (input_arr[i][j] == 1 && i == 2)
				matrix[0][j] = size;
			if (input_arr[i][size - 1] == 1 && i == 3)
				matrix[size - 1][j] = size;
			if (input_arr[i][j] == size && i == 2)
			{
				k = 0;
				while (k < size)
				{
					matrix[j][k] = k + 1;
					k++;
				}
			}
			if (input_arr[i][size - 1] == size && i == 3)
			{
				k = size - 1;
				while (k >= 0)
				{
					matrix[j][k] = size - k;
					k--;
				}
			}
			j++;
		}
		i++;
	}
}

void	fill_clues(int **matrix, int **input_arr, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < size)
		{
			if (input_arr[i][j] == 1 && i == 0)
				matrix[j][0] = size;
			if (input_arr[i][j] == 1 && i == 1)
				matrix[j][size - 1] = size;
			if (input_arr[i][j] == size && i == 0)
			{
				k = 0;
				while (k < size)
				{
					matrix[k][j] = k + 1;
					k++;
				}
			}
			if (input_arr[i][j] == size && i == 1)
			{
				k = size - 1;
				while (k >= 0)
				{
					matrix[k][j] = size - k;
					k--;
				}
			}
			j++;
		}
		i++;
	}
}


int	**solve_matrix(int **input_arr, int size)
{
	int	**matrix;

	matrix = create_matrix(size);
	if (!matrix)
		return (NULL);
	fill_clues(matrix, input_arr, size);
	fill_clues2(matrix, input_arr, size);
	recursion_solve(matrix, size);
	return (matrix);
}