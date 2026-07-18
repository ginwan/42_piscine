/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginwan <ginwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 20:09:04 by ginwan            #+#    #+#             */
/*   Updated: 2026/07/18 20:49:57 by ginwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str){
    int i = 0;
    while (str[i] != '\0')
    {
        if(str[i] >= 32 && str[i] <= 126){
            ++i;
        } else { 
            return 0;
        }
    }
    return 1;
}

int main(void){
    char str[] = "&^#$";

    int result = ft_str_is_printable(str);
    printf("%d \n", result);
    
    return 0;
}