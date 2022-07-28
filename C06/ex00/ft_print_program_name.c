/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_program_name.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <bfranco@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/26 12:35:44 by bfranco       #+#    #+#                 */
/*   Updated: 2022/07/28 09:32:00 by bfranco       ########   odam.nl         */
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

	i = 0;
	if (argc == 0)
		return (0);
	while (argv[0][i] != '\0')
	{
		ft_putchar(argv[0][i]);
		i++;
	}
	ft_putchar('\n');
}
