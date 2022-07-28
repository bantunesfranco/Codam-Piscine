/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <bfranco@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/14 12:28:50 by bfranco       #+#    #+#                 */
/*   Updated: 2022/07/22 14:50:50 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char			a[21] = "hello";
// 	char			b[21] = "hi";
// 	char			c[21] = "hello";
// 	char			d[21] = "hi";
// 	unsigned int	n;

// 	n = 20;
// 	printf("%s", ft_strncpy(b, a, n));
// 	printf("%s"strncpy(d, c, n));
// }
