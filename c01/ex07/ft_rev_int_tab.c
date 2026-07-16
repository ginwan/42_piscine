/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginwan <ginwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 10:25:18 by ginwan            #+#    #+#             */
/*   Updated: 2026/07/16 10:49:07 by ginwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size){
    int tmp;
    int left = 0;
    int right = size - 1;
    while(left < right){
        tmp = tab[left];
        tab[left] = tab[right];
        tab[right] = tmp;
        left++;
        right--;
    }
}

int main(void){
    int tab[] = {25, 12, 7, 6, 5};
    int size = 5;
    ft_rev_int_tab(tab, size); 
    for (int i = 0; i < size; i++){
        printf("%d \n", tab[i]);
    }
    
    return 0;
}