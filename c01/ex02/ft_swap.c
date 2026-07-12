/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginwan <ginwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 13:52:57 by ginwan            #+#    #+#             */
/*   Updated: 2026/07/12 14:03:56 by ginwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b){
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void){
    int a = 5;
    int b = 20;
    printf("before swap: %d %d\n", a,b);
    ft_swap(&a, &b);
    printf("after swap: %d %d\n", a,b);
    return (0);
}