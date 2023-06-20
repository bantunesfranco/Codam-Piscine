/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <bfranco@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/19 18:55:59 by bfranco       #+#    #+#                 */
/*   Updated: 2023/06/19 21:53:15 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"
#include <limits.h>

void	print_array(int **arr)
{
	char	c;
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = arr[i][j] + '0';
			j++;
			write(1, &c, 1);
			write(1, " ", 1);
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	size;
	int	**input_arr;
	int	**output;

	if (argc < 2 || argc > 3)
		return (ft_print_error());
	if (argc == 2)
		size = 4;
	else
		size = ft_atoi(argv[2]);
	if (size == -1)
		return (ft_print_error());
	input_arr = ft_input_to_array(argv[1], size);
	if (input_arr == NULL)
		return (ft_print_error());
	output = solve_matrix(input_arr, size);
	if (output == NULL)
		return (ft_print_error());
	print_array(output);
	ft_free_arr(input_arr, 4);
	ft_free_arr(output, size);
	return (0);
}
