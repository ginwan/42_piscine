/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginwan <ginwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 10:25:18 by ginwan            #+#    #+#             */
/*   Updated: 2026/07/16 11:07:10 by ginwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_sort_int_tab(int *tab, int size){
    int tmp;
    int i = 0;
    int j;
    while(i < size - 1){
        j = 0;
        while (j < size - i - 1)
        {
            if(tab[j] > tab[j+1]){
                tmp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1]=tmp;
            }
            j++;
        }
        i++;
    }
}

int main(void){
    int tab[] = {8, 27, 7, 4, 2};
    int size = 5;
    ft_sort_int_tab(tab, size); 
    for (int i = 0; i < size; i++){
        printf("%d \n", tab[i]);
    }
    
    return 0;
}