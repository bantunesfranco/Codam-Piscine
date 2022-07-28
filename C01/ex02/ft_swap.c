/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_swap.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/13 11:16:02 by bfranco       #+#    #+#                 */
/*   Updated: 2022/07/13 16:18:44 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 3;
// 	b = 6;
// 	printf("a: %d, b: %d\n", a, b);
// 	ft_swap(&a, &b);
// 	printf("a: %d, b: %d\n", a, b);
// }