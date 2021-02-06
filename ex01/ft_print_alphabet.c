/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmalaj <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 15:27:44 by mmalaj            #+#    #+#             */
/*   Updated: 2021/02/05 15:29:54 by mmalaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char letter;

	letter = 'a';
  	while(letter <= 'z')
  	{
    	ft_putchar(letter);
    	letter++;
	}
}

int		main(void)
{
	ft_print_alphabet();
	
	return(0);
}
