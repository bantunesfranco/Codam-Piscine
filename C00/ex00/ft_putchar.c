/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/07 16:13:50 by bfranco       #+#    #+#                 */
/*   Updated: 2022/07/09 11:49:13 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{		
	write(1, &c, 1);
}

//int	main(void)
//{
//	ft_putchar('c');
//	return (0);
//}
