/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_combo.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/08 13:47:08 by bfranco       #+#    #+#                 */
/*   Updated: 2022/07/10 11:08:30 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_combo(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}
