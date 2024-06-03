/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcenteno <rcenteno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 12:12:05 by rcenteno          #+#    #+#             */
/*   Updated: 2024/05/31 13:09:32 by rcenteno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}

int main(int argc, char *argv[])
{
    int index;

    index = 0;
    while(index < argc)
    {
        while(*argv[index] != '\0')
        {
        ft_putchar(*argv[index]);
        argv[index]++;
        }
        ft_putchar('\n');
        index++;
    }
    return (0);
}