/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcenteno <rcenteno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 18:22:33 by rcenteno          #+#    #+#             */
/*   Updated: 2024/06/03 17:26:17 by rcenteno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int check_printable(char c)
{
    if(c >= 32 && c <= 126)
    {
        return (1);
    }
    return (0);
}

void ft_putstr_non_printable(char *str)
{
    int index;
    
    index = 0;
    while(str[index] != '\0')
    {
        if (check_printable(str[index]) == 1)
        {
            putchar(str[index]);
        }
        else if (check_printable(str[index]) == 0)
        {
            putchar('\\');
            putchar("0123456789abcdef"[str[index] / 16]);
            putchar("0123456789abcdef"[str[index] % 16]);
        }
        index++;
    }
}

int main(void)
{
    char str[] = "Coucou\ntu vas bien ?";

    ft_putstr_non_printable(str);

    return (0);
}