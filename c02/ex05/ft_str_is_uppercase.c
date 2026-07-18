/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginwan <ginwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 20:09:04 by ginwan            #+#    #+#             */
/*   Updated: 2026/07/18 20:38:55 by ginwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str){
    int i = 0;
    while (str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z'){
            ++i;
        } else { 
            return 0;
        }
    }
    return 1;
}

int main(void){
    char str[] = "HI";

    int result = ft_str_is_uppercase(str);
    printf("%d \n", result);
    
    return 0;
}