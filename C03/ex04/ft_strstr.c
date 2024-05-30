/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcenteno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 10:49:18 by rcenteno          #+#    #+#             */
/*   Updated: 2024/05/30 11:13:12 by rcenteno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

char	*ft_strstr(char *str, char *to_find)
{
	char	*aux_str;
	char	*aux_to_find;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		aux_str = str;
		aux_to_find = to_find;
		while ((*aux_str == *aux_to_find) && *aux_to_find != '\0')
		{
			aux_str++;
			aux_to_find++;
		}
		if (*aux_to_find == '\0')
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}

/*
int main(void)
{
	char str[] = "Hola Mundo CEBOLLA";
	char to_find[] = "Mundo";
	
	printf("%s",ft_strstr(str,to_find));
}
*/
