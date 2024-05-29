/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcenteno <rcenteno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:45:14 by rcenteno          #+#    #+#             */
/*   Updated: 2024/05/29 16:26:50 by rcenteno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

char	*ft_strupcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] -= 32;
		}
		index++;
	}
	return (str);
}

/*
int	main(void)
{
	char	str1[] = "!a!!c!b!!";
	char	str2[] = "~~~f~~g t~~~ ";
	char	str3[] = " dsdfsd ";

	printf("%s\n",ft_strupcase(str1));
	printf("%s\n",ft_strupcase(str2));
	printf("%s\n",ft_strupcase(str3));
}
*/
