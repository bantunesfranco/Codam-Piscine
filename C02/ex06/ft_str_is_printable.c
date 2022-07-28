/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_printable.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <bfranco@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/15 12:01:29 by bfranco       #+#    #+#                 */
/*   Updated: 2022/07/22 14:35:59 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str);

int	ft_str_is_printable(char *str)
{
	int	i;
	int	l;

	i = 0;
	ft_strlen(str);
	l = ft_strlen(str);
	while (i <= l - 1)
	{
		if (!(str[i] >= 32 && str[i] <= 126))
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

// 	str = "hdgf/;lfgh;jsnf";
// 	ft_str_is_printable(str);
// 	printf("%d", ft_str_is_printable(str));
// }
