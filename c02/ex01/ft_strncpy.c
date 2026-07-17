/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginwan <ginwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 11:11:47 by ginwan            #+#    #+#             */
/*   Updated: 2026/07/17 11:46:45 by ginwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n) // unsigned mean n cannot be negative
{
    char* tmp = dest;
    unsigned int i = 0;
    
    while(i < n && *src != '\0'){
        *dest = *src;
        dest++;
        src++;
        i++;
    }
    while (i < n)
	{
		*dest = '\0';
        dest++;
		i++;
	}
    return tmp;
}

int main(void){
    char src[] = "Hi";
    char dest[100];
    
    char* dest_text = ft_strncpy(dest, src, 10);
    
    printf("%s \n", dest_text);

    return 0;
}