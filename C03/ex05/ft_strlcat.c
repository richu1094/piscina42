/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcenteno <rcenteno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 11:14:24 by rcenteno          #+#    #+#             */
/*   Updated: 2024/05/30 13:44:01 by rcenteno         ###   ########.fr       */
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
	int				index;

	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	index = 0;
	if (size < size_dest + 1)
	{
		return (size_src + size);
	}
	else
	{
		while (src[index] != '\0')
		{
			dest[size_dest] = src[index];
			index++;
			size_dest++;
		}
		dest[size_dest] = '\0';
		return (size_dest);
	}
}

/*
int	main(void)
{
	char	dest[20] = "Hola ";
	char	src[] = "mundo!";
	int		size;

	size = 20;
	size = 20;
	printf("%d", ft_strlcat(dest, src, size));
	printf("\n");
	printf("%s", dest);
}
*/
