/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_div_mod.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/13 15:36:54 by bfranco       #+#    #+#                 */
/*   Updated: 2022/07/15 09:43:41 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 45;
// 	b = 6;
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("div: %d, mod: %d", a, b);
// }