/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   f_putstr.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <bfranco@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/24 10:33:01 by bfranco       #+#    #+#                 */
/*   Updated: 2022/07/24 10:42:41 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

// int	main(void)
// {
// 	char	*str;

// 	str = "banana";
// 	ft_putstr(str);
// }
