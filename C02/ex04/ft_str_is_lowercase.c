/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcenteno <rcenteno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:33:14 by rcenteno          #+#    #+#             */
/*   Updated: 2024/05/29 16:26:58 by rcenteno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

int	ft_str_is_lowercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!(str[index] >= 'a' && str[index] <= 'z'))
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
	char	str1[] = "aaaaazzz";
	char	str2[] = "aaaAzzzz";
	char	str3[] = "aaaazzzz";

	printf("%d\n",ft_str_is_lowercase(str1));
	printf("%d\n",ft_str_is_lowercase(str2));
	printf("%d\n",ft_str_is_lowercase(str3));
}
*/