/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_arr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <bfranco@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/19 19:27:41 by bfranco       #+#    #+#                 */
/*   Updated: 2023/06/19 22:14:39 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"
#include <stdio.h>

void	ft_free_arr(int **arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

int	ft_isspace(char c)
{
	return (c == ' ' || c == '\f' || c == '\n' \
	|| c == '\r' || c == '\t' || c == '\v');
}


int		**fill_arr(int **arr, char *input, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < 4)
	{
		arr[i] = malloc(sizeof(int) * size);
		if (arr[i] == NULL)
			return (ft_free_arr(arr, i), NULL);
		j = 0;
		while (j < size && input[k])
		{
			while (ft_isspace(input[k]))
				k++;
			arr[i][j] = input[k] - '0';
			k++;
			j++;
		}
		i++;
	}
	return (arr);
}

int	**ft_input_to_array(char *input, int size)
{
	int	**input_arr;

	// if (check_input(input, size) == -1)
	// 	return (NULL);
	input_arr = malloc(sizeof(int *) * size * 4);
	if (input_arr == NULL)
		return (NULL);
	input_arr = fill_arr(input_arr, input, size);
	if (input_arr == NULL)
		return (NULL);
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("%d ", input_arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return (input_arr);
}
