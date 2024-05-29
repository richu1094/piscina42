/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcenteno <rcenteno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:43:10 by rcenteno          #+#    #+#             */
/*   Updated: 2024/05/28 15:55:37 by rcenteno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	index;

	index = 0;
	while (src[index] != '\0' && index < n)
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}

/*
int	main(void)
{
	unsigned int	n;
	char	og[] = "klk mmgv";
	char	dest[50];

	n = 5;

	ft_strncpy(dest,og,5);

	printf("Original: %s\n", og);
	printf("Copia: %s\n", dest);
}
*/
