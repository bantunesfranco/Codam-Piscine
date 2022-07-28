/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_negative.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/08 12:25:14 by bfranco       #+#    #+#                 */
/*   Updated: 2022/07/08 13:02:26 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

//int	main(void)
//{
//	ft_is_negative(5);
//	ft_is_negative(-5);
//	ft_is_negative(0);
//	return (0);
//}
