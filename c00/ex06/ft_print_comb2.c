/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginwan <ginwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 13:28:39 by ginwan            #+#    #+#             */
/*   Updated: 2026/07/07 14:27:11 by ginwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb2(void) 
{
    char i;
    char j;
    
    while (i <= 98)
    {
        j = i + 1;
        while (j <= 99)
        {
            ft_putchar(i/10 + '0');   
            ft_putchar(i%10 + '0');
            ft_putchar(' ');
            ft_putchar(j/10 + '0');   
            ft_putchar(j%10 + '0');
            if (!(i == 98 && j == 99)){
                write(1, ", ", 2);
            }
            j++;
        }
        i++;
    }
}

int main(void){
    ft_print_comb2();
    return (0);
}