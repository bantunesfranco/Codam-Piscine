/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_rev_params.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <bfranco@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/26 12:52:19 by bfranco       #+#    #+#                 */
/*   Updated: 2022/07/26 13:57:02 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[argc - i][j] != '\0')
		{	
			ft_putchar(argv[argc - i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
