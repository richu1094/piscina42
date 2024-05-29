/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcenteno <rcenteno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:45:14 by rcenteno          #+#    #+#             */
/*   Updated: 2024/05/29 16:26:52 by rcenteno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

int	ft_str_is_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!(str[index] >= '!' && str[index] <= '~'))
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
	char	str1[] = "!!!!!!!!";
	char	str2[] = "~~~~~~~~ ";
	char	str3[] = " dsdfsd ";

	printf("%d\n",ft_str_is_printable(str1));
	printf("%d\n",ft_str_is_printable(str2));
	printf("%d\n",ft_str_is_printable(str3));
}
*/