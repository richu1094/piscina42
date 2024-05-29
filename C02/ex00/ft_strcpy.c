/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcenteno <rcenteno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:43:10 by rcenteno          #+#    #+#             */
/*   Updated: 2024/05/28 15:04:29 by rcenteno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

char	*ft_strcpy(char *dest, char *src)
{
	int index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	og[] = "klk mmgv";
	char	dest[50];

	ft_strcpy(dest,og);

	printf("Original: %s\n", og);
	printf("Copia: %s\n", dest);
}
*/
