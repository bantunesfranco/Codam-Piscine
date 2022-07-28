/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bfranco <bfranco@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/18 15:32:22 by bfranco       #+#    #+#                 */
/*   Updated: 2022/07/23 15:25:35 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0' && i < nb)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	s1[20] = "banna";
// 	char	s2[20] = "orange";
// 	char	s3[20] = "banna";
// 	char	s4[20] = "orange";
// 	int		nb;

// 	nb = 200;
// 	printf("%s\n", ft_strncat(s1, s2, nb));
// 	printf("%s\n", strncat(s3, s4, nb));
// }
