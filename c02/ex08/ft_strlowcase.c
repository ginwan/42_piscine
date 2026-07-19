/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginwan <ginwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 11:42:23 by ginwan            #+#    #+#             */
/*   Updated: 2026/07/19 12:01:53 by ginwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strlowcase(char *str){
    int i = 0;

    while (str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
        i++;
    }
    return str;
}

int main(void){
    char str[] = "Hello, this me Ginwan";
    
    ft_strlowcase(str);
    printf("%s \n", str);
    
    return 0;
}