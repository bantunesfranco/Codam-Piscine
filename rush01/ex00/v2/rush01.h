/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush01.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <bfranco@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/19 18:56:33 by bfranco       #+#    #+#                 */
/*   Updated: 2023/06/19 21:53:47 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

int		ft_print_error(void);
int		ft_atoi(char *str);
int		**ft_input_to_array(char *input, int size);
int		**solve_matrix(int **input_arr, int size);
void	ft_free_arr(int **arr, int size);
int		ft_isspace(char c);
int		**fill_arr(int **arr, char *input, int size);
int		**create_matrix(int size);
void	recursion_solve(int **matrix, size);

#endif