/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcenteno <rcenteno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 11:14:01 by rcenteno          #+#    #+#             */
/*   Updated: 2024/05/31 13:08:01 by rcenteno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}

int main(int argc, char *argv[])
{
    while(*argv[0] != '\0' && argc)
    {
        ft_putchar(*argv[0]);
        argv[0]++;
    }
    ft_putchar('\n');
    return (0);
}
