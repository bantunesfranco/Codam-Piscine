/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_combo.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/08 13:47:08 by bfranco       #+#    #+#                 */
/*   Updated: 2022/07/11 17:00:27 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	print_nb(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a != '9' || b != '9' || c != '9' || d != '9')
		write(1, ", ", 2);
}

void	looper(char a, char b, char c, char d)
{
	while (a <= '9')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					print_nb(a, b, c, d);
					d++;
				}
				d = '0';
				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
		a++;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	looper(a, b, c, d);
}

//int	main(void)
//{
//	ft_print_comb2();
//}
