/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginwan <ginwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 11:42:23 by ginwan            #+#    #+#             */
/*   Updated: 2026/07/19 12:26:38 by ginwan           ###   ########.fr       */
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


char *ft_strcapitalize(char *str){
    int i = 0;
    
    ft_strlowcase(str);

    if(str[0] >= 'a' && str[0] <= 'z'){
        str[0] = str[0] - 32;
    } 
    
    i = 1;
    while (str[i] != '\0')
    {
        if (!((str[i - 1] >= 'a' && str[i - 1] <= 'z')
				|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
        i++;
    }
    return str;
}

int main(void){
    char str[] = "Hello, this me Ginwan";
    
    ft_strcapitalize(str);
    printf("%s \n", str);
    
    return 0;
}