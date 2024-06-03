/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcenteno <rcenteno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 11:14:24 by rcenteno          #+#    #+#             */
/*   Updated: 2024/05/31 11:03:09 by rcenteno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

unsigned int	ft_strlen(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	size_dest;
	unsigned int	size_src;
	unsigned int	index;

	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	index = 0;
	if (size <= size_dest)
		return (size_src + size);
	while (src[index] != '\0' && size_dest + index < size - 1)
	{
		dest[size_dest + index] = src[index];
		index++;
	}
	if (size_dest + index < size)
	{
		dest[size_dest + index] = '\0';
	}
	return (size_dest + size_src);
}

/*
int	main(void)
{
	char	dest[10] = "Hola ";
	char	src[] = "mundo!";
	int		size;

	size = 10;
	printf("%d", ft_strlcat(dest, src, size));
	printf("\n");
	printf("%s", dest);
}
*/