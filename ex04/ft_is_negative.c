/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmalaj <mmalaj@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 13:21:59 by mmalaj            #+#    #+#             */
/*   Updated: 2021/02/06 13:21:48 by mmalaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_is_negative(int n)
{
    if(n >= 1)
    {
        ft_putchar('P');
    }
    else {
        ft_putchar('N');
    }
}

int main(int argc, const char *argv[])
{
    int i;

    i = -1;
    while (i != 2)
    {
        ft_is_negative(i);
        i++;
    }
    return 0;
    
}