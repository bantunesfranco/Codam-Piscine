/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <bfranco@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/18 15:32:22 by bfranco       #+#    #+#                 */
/*   Updated: 2022/07/26 15:37:53 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while ((s1[a] != '\0' || s2[a] != '\0') && a < n)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	int		n;

// 	s1 = "abcdabcdabcdabcdabcdabcdabcdabcdabcd";
// 	s2 = "abcdabcdabcdabcdabcdabcd";
// 	n = 30;
// 	printf("mine %i\n", ft_strncmp(s1, s2, n));
// 	printf("sys %i\n", strncmp(s1, s2, n));
// }
