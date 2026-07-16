/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginwan <ginwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 14:24:26 by ginwan            #+#    #+#             */
/*   Updated: 2026/07/13 14:30:21 by ginwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str){
    int i = 0;
    
    while (str[i])
    {
        i++;
    }
    printf("%d\n",i);
    return (i);
}

int main(void){
    ft_strlen("Ginwan");
    return (0);
}