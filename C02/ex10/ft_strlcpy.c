/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <bfranco@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/14 12:28:50 by bfranco       #+#    #+#                 */
/*   Updated: 2022/07/21 16:58:26 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = 0;
	while (src[l])
		l++;
	if (size < 1)
		return (l);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
		dest[i] = '\0';
	return (l);
}

// int	main(void)
// {
// 	char	*a;
// 	char	b[40];
// 	int		size;

// 	size = 34;
// 	a = "bananas banaaadsdasdadsanas";
// 	size = ft_strlcpy(b, a, size);
// 	printf("str is %d\n", size);
// 	printf("str is %s\n", b);
// }
