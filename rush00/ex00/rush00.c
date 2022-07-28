/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush00.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ovan-rhe <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/09 13:14:06 by ovan-rhe      #+#    #+#                 */
/*   Updated: 2022/07/09 14:51:39 by ovan-rhe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
int		print_top_bot(int x);
void	print_side(int x, int y);

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write (1, "Please enter integers bigger than 0", 37);
	}
	else
	{
		print_top_bot(x);
		print_side(x, y);
		if (y > 1)
			print_top_bot(x);
	}
}

int	print_top_bot(int x)
{
	int	n;

	ft_putchar('o');
	if (x == 1)
	{	
		write (1, "\n", 1);
		return (0);
	}
	n = 2;
	while (n < x)
	{
		ft_putchar('-');
		n++;
	}
	ft_putchar('o');
	write (1, "\n", 1);
	return (0);
}

void	print_side(int x, int y)
{
	int	i;
	int	n;

	i = 0;
	while (i < y - 2)
	{
		ft_putchar('|');
		n = 2;
		while (n < x)
		{
			ft_putchar(' ');
			n++;
		}
		if (x > 1)
			ft_putchar('|');
		write (1, "\n", 1);
		i++;
	}
}
