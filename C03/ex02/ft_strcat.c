/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcenteno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 10:39:50 by rcenteno          #+#    #+#             */
/*   Updated: 2024/05/30 10:53:41 by rcenteno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

char	*ft_strcat(char *dest, char *src)
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
	while (src[index] != '\0')
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
	
	printf("%s",ft_strcat(dest,src));

}
*/
