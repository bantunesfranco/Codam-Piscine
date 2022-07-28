/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_int_tab.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <bfranco@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/14 09:59:35 by bfranco       #+#    #+#                 */
/*   Updated: 2022/07/15 13:19:58 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	a;

	i = 0;
	while (i <= size - 1 - i)
	{
		j = tab[size - 1 - i];
		a = tab[i];
		tab[i] = j;
		tab[size - 1 - i] = a;
		i++;
	}
}

// int	main(void)
// {
// 	int	i;
// 	int	array[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};

// 	i = 0;c
// 	ft_rev_int_tab( array, 9);
// 	while (i < 9)
// 	{
// 		printf("%d ", array[i]);
// 		i++;
// 	}
// }
