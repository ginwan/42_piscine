/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginwan <ginwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 20:09:04 by ginwan            #+#    #+#             */
/*   Updated: 2026/07/18 20:32:03 by ginwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_numeric(char *str){
    int i = 0;
    while (str[i] != '\0')
    {
        if(str[i] >= '0' && str[i] <= '9'){
            ++i;
        } else { 
            return 0;
        }
    }
    return 1;
}

int main(void){
    char str[] = "123";

    int result = ft_str_is_numeric(str);
    printf("%d \n", result);
    
    return 0;
}