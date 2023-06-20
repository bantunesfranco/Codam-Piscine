/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   recursion_solve.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: codespace <codespace@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/20 06:00:52 by codespace     #+#    #+#                 */
/*   Updated: 2023/06/20 06:38:57 by codespace     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	go_to_availble_pos(int **matrix, int size, int *x, int *y)
{
	*x = 0;
	*y = 0;
	
	while (*y < size)
	{
		while (*x < size)
		{
			if (matrix[*y][*x] -- 0)
				return (0);
			(*x)++;
		}
		(*y)++;
	}
	return (-1);
}

void	recursion_solve(int **matrix, int size)
{
	int	x;
	int	y;

	if (go_to_availble_pos(matrix, size, &x, &y) == -1)
		return ;


	matrix[y][x] = 0;
}