/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <bfranco@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/28 17:05:47 by bfranco       #+#    #+#                 */
/*   Updated: 2022/07/28 19:50:40 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

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
	s1[i] = 0;
	return (s1);
}

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

int	lencount(char **strs, char *sep, int size)
{
	int	i;
	int	k;
	int	fulllen;

	k = 0;
	fulllen = 0;
	while (k < size)
	{
		i = 0;
		while (strs[k][i])
		{
			fulllen += 1;
			i++;
		}
		k++;
	}
	fulllen += ft_strlen(sep) * (size - 1);
	return (fulllen);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		k;
	char	*arr;

	arr = malloc(sizeof(char) * lencount(strs, sep, size));
	if (size == 0)
	{
		arr = "";
		return (arr);
	}
	k = 0;
	while (k < size)
	{
		ft_strcat(arr, strs[k]);
		if (k++ != size - 1)
			ft_strcat(arr, sep);
	}
	arr[lencount(strs, sep, size) + 1] = '\0';
	return (arr);
}

// int	main(void)
// {
// 	char	*strs[] = {"banana", "apple", "orange", "ola"};
// 	char	*sep = "-";
// 	char	*arr;

// 	arr = ft_strjoin(4, strs, sep);
// 	printf("%s\n", ft_strjoin(4, strs, sep));
// 	free(arr);
// }
