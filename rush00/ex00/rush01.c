/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush01.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ovan-rhe <ovan-rhe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/10 18:19:33 by ovan-rhe      #+#    #+#                 */
/*   Updated: 2022/07/10 18:23:59 by ovan-rhe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_side(int x, int y);
void	ft_putchar(char c);
int		print_top(int x, char c);
int		print_bot(int x, char c);

void	rush(int x, int y)
{
	int	c;

	if (x <= 0 || y <= 0)
	{
		write(1, "please enter values bigger than 0", 33);
	}
	else
	{
		c = '/';
		print_top(x, c);
		print_side(x, y);
		print_bot(x, c);
	}
}

int	print_top(int x, char c)
{
	char	n;

	if (x == 1)
	{
		ft_putchar(c);
		write(1, "\n", 1);
		return (0);
	}	
	else
		ft_putchar(c);
	n = 2;
	while (n < x)
	{
		ft_putchar('*');
		n++;
		if (n == x)
			ft_putchar(92);
	}
	write(1, "\n", 1);
	return (0);
}

void	print_side(int x, int y)
{
	int	i;
	int	n;

	i = 0;
	while (i < y -2)
	{
		write(1, "*", 1);
		n = 2;
		while (n < x)
		{
			write(1, " ", 1);
			n++;
		}
		if (x > 1)
		{
			ft_putchar('*');
		}
		write(1, "\n", 1);
		i++;
	}
}

int	print_bot(int x, char c )
{
	char	n;

	if (x == 1)
	{
		ft_putchar(92);
		write(1, "\n", 1);
		return (0);
	}	
	else
		ft_putchar(92);
	n = 2;
	while (n < x)
	{
		ft_putchar('*');
		n++;
		if (n == x)
			ft_putchar(c);
	}
	write(1, "\n", 1);
	return (0);
}
