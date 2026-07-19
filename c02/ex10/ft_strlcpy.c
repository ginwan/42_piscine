/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginwan <ginwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 11:11:47 by ginwan            #+#    #+#             */
/*   Updated: 2026/07/19 14:00:17 by ginwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


unsigned int ft_strlcpy(char *dest, char *src, unsigned int size) // unsigned mean n cannot be negative
{
    unsigned int i = 0;
    
    if(size > 0){
        while(src[i] && i < (size - 1)){
            dest[i] = src[i];
            i++;
        }
    }
    dest[size - 1] = '\0';
    return i;
}

int main(void){
    char src[] = "Hello";
    char dest[5];
    
    unsigned int len = ft_strlcpy(dest, src, 5);
    printf("Length: %u\n", len);

    return 0;
}