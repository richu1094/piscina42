/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcenteno <rcenteno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:45:14 by rcenteno          #+#    #+#             */
/*   Updated: 2024/06/03 13:49:17 by rcenteno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowercase(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
		{
			str[index] += 32;
		}
		index++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	index;
	int start;

	index = 0;
	start = 1;
	ft_strlowercase(str);
	while (str[index] != '\0')
	{
		if(str[index] >= '0' && str[index] <= '9')
		{
			start = 0;
		}
		else if(start == 1 && (str[index] >= 'a' && str[index] <= 'z'))
		{
			str[index] -= 32;
			start = 0;
		}
		else if(!(str[index] >= 'a' && str[index] <= 'z'))
		{
			start = 1;
		}
		index++;
	}
	return (str);
}

int	main(void)
{
	char	str1[] = "saLut Comment tu";
	
	printf("%s\n",ft_strcapitalize(str1));
}