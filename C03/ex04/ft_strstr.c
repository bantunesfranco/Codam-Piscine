/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <bfranco@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/21 10:26:52 by bfranco       #+#    #+#                 */
/*   Updated: 2022/07/25 15:05:05 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	char	*ptr;

// 	s1 = "banana is good nanonano";
// 	s2 = "";
// 	ptr = ft_strstr(s1, s2);
// 	printf("mine :%p, ", ptr);
// 	printf("%s\n", ptr);
// 	ptr = strstr(s1, s2);
// 	printf("sys :%p, ", ptr);
// 	printf("%s\n", ptr);
// 	return (0);
// }
