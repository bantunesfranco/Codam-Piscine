/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_alpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <bfranco@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/15 12:01:29 by bfranco       #+#    #+#                 */
/*   Updated: 2022/07/21 16:57:29 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str);

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	l;

	i = 0;
	l = ft_strlen(str);
	while (i <= l - 1)
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')))
			if (!((str[i] >= 'a' && str[i] <= 'z')))
				return (0);
		i++;
	}
	return (1);
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
// 	int		a;

// 	str = "dfghjklasdfghSDFGHJK";
// 	a = ft_str_is_alpha(str);
// 	printf("%d", a);
// }
