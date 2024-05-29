/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcenteno <rcenteno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:56:45 by rcenteno          #+#    #+#             */
/*   Updated: 2024/05/29 16:27:02 by rcenteno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

int	ft_str_is_alpha(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!((str[index] >= 'A' && str[index] <= 'Z')
				|| (str[index] >= 'a' && str[index] <= 'z')))
		{
			return (0);
		}
		index++;
	}
	return (1);
}

/*
int	main(void)
{
	char str1[] = "Hola Mundo";
	char str2[] = "HolaMundo";
	char str3[] = "aaaazzzzAAAAZZZZ";
	printf("%d\n",ft_str_is_alpha(str1));
	printf("%d\n",ft_str_is_alpha(str2));
	printf("%d\n",ft_str_is_alpha(str3));
}
*/
