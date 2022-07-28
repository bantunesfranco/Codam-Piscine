/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <bfranco@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/13 17:23:38 by bfranco       #+#    #+#                 */
/*   Updated: 2022/07/13 17:28:14 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// int	main(void)
// {
// 	char	*str;
// 	int		l;

// 	str = "banananana,mdf;gs,cds;gmdsgertyuiop';lkjhgfdsd[]]jhgfdfg's,ssssssss";
// 	l = ft_strlen(str);
// 	printf("%d", l);
// }
