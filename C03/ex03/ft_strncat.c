/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcenteno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 10:44:49 by rcenteno          #+#    #+#             */
/*   Updated: 2024/05/30 10:58:25 by rcenteno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	index;
	int	at;

	index = 0;
	while (dest[index] != '\0')
	{
		index++;
	}
	at = index;
	index = 0;
	while (index < nb && (src[index] != '\0'))
	{
		dest[at] = src[index];
		index++;
		at++;
	}
	dest[at] = '\0';
	return (dest);
}

/*
int main(void)
{
	char src[20] = "Mundo!";
	char dest[] = "Hola ";
    unsigned int size;

    size = 5;
	
	printf("%s",ft_strncat(dest,src,size));
}
*/
