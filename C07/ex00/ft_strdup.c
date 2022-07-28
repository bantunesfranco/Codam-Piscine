/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <bfranco@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/28 14:01:12 by bfranco       #+#    #+#                 */
/*   Updated: 2022/07/28 15:13:43 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		l;
	char	*dest;

	l = ft_strlen(src);
	dest = malloc(sizeof(char) * (l + 1));
	if (dest == NULL)
		return (0);
	ft_strcpy(dest, src);
	return (dest);
}

// int	main(void)
// {
// 	char	*src;
// 	char	*dest;

// 	src = "banana";
// 	dest = ft_strdup(src);
// 	printf("%p\n%s\n", dest, dest);
// 	free (dest);
// }
