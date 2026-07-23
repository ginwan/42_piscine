#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb){
    unsigned int i = 0;
    unsigned int j = 0;

    while(dest[i] != '\0')   
        i++;
    while (src[j] != '\0' && j <= nb)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}

int main(void){
    char src[] = "How are you?";
    char dest[100] = "Hello, ";

    char *result = ft_strncat(dest, src, 3);

    printf("%s \n", result);

    return 0;
}