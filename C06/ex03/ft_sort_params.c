/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   c.c                                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <bfranco@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/27 09:50:43 by bfranco       #+#    #+#                 */
/*   Updated: 2022/07/27 09:50:43 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != 0)
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **s1, char **s2)
{
	char	*a;

	a = *s1;
	*s1 = *s2;
	*s2 = a;
}

int	main(int argc, char **argv)
{
	int	i;
	int	k;

	i = 1;
	while (i < argc)
	{
		k = 1;
		while (k < argc - 1)
		{
			if (ft_strcmp(argv[k + 1], argv[k]) < 0)
			{
				ft_swap(&argv[k + 1], &argv[k]);
			}
			k++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
}
