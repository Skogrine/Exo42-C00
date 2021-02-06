/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmalaj <mmalaj@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:17:59 by mmalaj            #+#    #+#             */
/*   Updated: 2021/02/05 16:24:48 by mmalaj           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void  ft_putchar(char c){
  write(1, &c, 1);
}

int   main(void){
  ft_putchar('c');
  ft_putchar('\n');
  return(0);
}
