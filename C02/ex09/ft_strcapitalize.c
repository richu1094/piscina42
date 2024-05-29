/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcenteno <rcenteno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:45:14 by rcenteno          #+#    #+#             */
/*   Updated: 2024/05/29 18:22:14 by rcenteno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	index;
	int start;

	index = 0;
	start = 1;
	while (str[index] != '\0')
	{
		if ((start == 1) && (str[index] >= 'a' && str[index] <= 'z'))
		{
			str[index] -= 32;
			start = 0;
		}
		else if(!((str[index] >= 'a' && str[index] <= 'z'))){
			start = 1;
		}
		index++;
	}
	return (str);
}

int	main(void)
{
	char	str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s\n",ft_strcapitalize(str1));
}