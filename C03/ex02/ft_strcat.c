/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <bfranco@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/18 15:32:22 by bfranco       #+#    #+#                 */
/*   Updated: 2022/07/24 10:14:56 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		j++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

// int	main(void)
// {
// 	char	s1[20] = "bana";
// 	char	s2[20] = "orange";
// 	char	s3[20] = "bana";
// 	char	s4[20] = "orange";

// 	printf("%s\n", ft_strcat(s1, s2));
// 	printf("%s\n", strcat(s3, s4));
// }
