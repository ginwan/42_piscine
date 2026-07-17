/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginwan <ginwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 11:12:54 by ginwan            #+#    #+#             */
/*   Updated: 2026/07/16 13:58:01 by ginwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char* ft_strcpy(char *dest, char *src)
{
    char* tmp = dest;
    if(dest == NULL || src == NULL)
        return NULL;
    while(*src != '\0'){
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return tmp;
}

int main(void){
    char src[] = "Hello, this me Ginwan";
    char dest[100];
    
    char* dest_text = ft_strcpy(dest, src);
    
    printf("%s \n", dest_text);

    return 0;
}
