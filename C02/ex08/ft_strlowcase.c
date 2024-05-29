/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcenteno <rcenteno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:45:14 by rcenteno          #+#    #+#             */
/*   Updated: 2024/05/29 16:26:46 by rcenteno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

char	*ft_strlowcase(char *str)
{
	int	index;

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

/*
int	main(void)
{
	char	str1[] = "!A!!C!V!!";
	char	str2[] = "~~~f~~dAd t~~~ ";
	char	str3[] = " sdfFDS ";

	printf("%s\n",ft_strlowcase(str1));
	printf("%s\n",ft_strlowcase(str2));
	printf("%s\n",ft_strlowcase(str3));
}
*/