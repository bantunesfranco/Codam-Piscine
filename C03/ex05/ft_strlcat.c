/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <bfranco@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/18 15:32:22 by bfranco       #+#    #+#                 */
/*   Updated: 2022/07/26 15:39:22 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	lendest;
	unsigned int	lensrc;

	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	i = lendest;
	j = 0;
	if (size < 1)
		return (lensrc + size);
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	if (size < lendest)
		return (lensrc + size);
	else
		return (lendest + lensrc);
}

// int	main(void)
// {
// 	char	s1[100] = "banana1221312313\n";
// 	char	s2[100] = "orange12345678";
// 	char	s3[100] = "banana1221312313\n";
// 	char	s4[100] = "orange12345678";
// 	int		size;

// 	size = 0;
// 	size = ft_strlcat(s1, s2, size);
// 	printf("%d\n", size);
// 	printf("%s\n", s1);
// 	size = 0;
// 	size = strlcat(s3, s4, size);
// 	printf("%d\n", size);
// 	printf("%s\n", s3);
// }
