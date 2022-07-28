/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <bfranco@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/18 15:32:22 by bfranco       #+#    #+#                 */
/*   Updated: 2022/07/23 14:48:05 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	res;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != 0 && s2[i] != 0)
		i++;
	res = s1[i] - s2[i];
	return (res);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;

// 	s1 = "b";
// 	s2 = "a";
// 	printf("bruno %d\n", ft_strcmp(s1, s2));
// 	printf("sistema %d\n", strcmp(s1, s2));
// }
