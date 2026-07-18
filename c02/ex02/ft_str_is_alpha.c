/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginwan <ginwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 20:09:04 by ginwan            #+#    #+#             */
/*   Updated: 2026/07/18 20:24:24 by ginwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str){
    int i = 0;
    while (str[i] != '\0')
    {
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){
            ++i;
        } else { 
            return 0;
        }
    }
    return 1;
}

int main(void){
    char str[] = "HI123";

    int result = ft_str_is_alpha(str);
    printf("%d \n", result);
    
    return 0;
}