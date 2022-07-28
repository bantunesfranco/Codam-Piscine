/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcapitalize.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <bfranco@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/15 12:01:29 by bfranco       #+#    #+#                 */
/*   Updated: 2022/07/22 14:36:38 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		k;
	char	s;

	i = 0;
	k = 1;
	while (str[i] != '\0')
	{
		s = str[i];
		if (k == 1 && s >= 'a' && s <= 'z')
			str[i] -= 32;
		else if (k == 0 && s >= 'A' && s <= 'Z')
			str[i] += 32;
		if (s < '0' || (s > '9' && s < 'A') || (s > 'Z' && s < 'a') || s > 'z')
			k = 1;
		else
			k = 0;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	*str;
// 	char	a[] = "salut, ent tu vas ? 42mots qaNte-deux; cte+et+un";

// 	str = a;
// 	ft_strcapitalize(str);
// 	printf("%s", str);
// }
