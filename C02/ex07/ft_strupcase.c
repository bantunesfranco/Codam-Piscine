/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strupcase.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <bfranco@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/15 12:01:29 by bfranco       #+#    #+#                 */
/*   Updated: 2022/07/22 14:36:04 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int		ft_strlen(char *str);

char	*ft_strupcase(char *str)
{
	int		i;
	int		l;

	l = ft_strlen(str);
	i = 0;
	while (i <= l - 1)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

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
// 	char	a[] = "gklsSDFGHJ456789d";

// 	str = a;
// 	ft_strupcase(str);
// 	printf("%s", str);
// }
