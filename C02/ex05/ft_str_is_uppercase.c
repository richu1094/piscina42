/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcenteno <rcenteno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:40:14 by rcenteno          #+#    #+#             */
/*   Updated: 2024/05/29 16:26:55 by rcenteno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

int	ft_str_is_uppercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!(str[index] >= 'A' && str[index] <= 'Z'))
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
	char	str1[] = "AAAZAZAZAZ";
	char	str2[] = "AAAAZZZZA ";
	char	str3[] = "aaaazzzz";

	printf("%d\n",ft_str_is_uppercase(str1));
	printf("%d\n",ft_str_is_uppercase(str2));
	printf("%d\n",ft_str_is_uppercase(str3));
}
*/