/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcenteno <rcenteno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:11:53 by rcenteno          #+#    #+#             */
/*   Updated: 2024/05/29 16:26:59 by rcenteno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

int	ft_str_is_numeric(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!(str[index] >= '0' && str[index] <= '9'))
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
	char str1[] = "000 123";
	char str2[] = "123456";
	char str3[] = "000099999";
	printf("%d\n",ft_str_is_numeric(str1));
	printf("%d\n",ft_str_is_numeric(str2));
	printf("%d\n",ft_str_is_numeric(str3));
}
*/
