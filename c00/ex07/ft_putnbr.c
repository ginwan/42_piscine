
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginwan <ginwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 13:12:20 by ginwan            #+#    #+#             */
/*   Updated: 2026/07/08 13:12:21 by ginwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_putnbr(int nb)
{
    char num;
    if(nb < 0){
        write(1, "-", 1);
        nb = -nb;
    }
    if(nb >= 10)
    {
        ft_putnbr(nb / 10);
    }
    num = (nb % 10) + '0';
    write(1, &num, 1);
}

int main(void){
    ft_putnbr(-42);
    write(1, "\n", 1);
    return (0);
}