/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcenteno <rcenteno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 18:22:33 by rcenteno          #+#    #+#             */
/*   Updated: 2024/06/03 17:51:16 by rcenteno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *addr)
{
    int index;

    index = 0;
    while(addr[index] != '\0')
    {
        index++;
    }
    return (index);
}

void *ft_print_memory(void *addr, unsigned int size)
{
    if(size == 0)
    {
        
    }
    else
    {
        write(1, (void *)addr, 16);
    }
}

int main(void)
{
    char str[] = "Hola mundo";

    ft_print_memory(str,16);   
}