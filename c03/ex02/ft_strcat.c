#include <stdio.h>

char *ft_strcat(char *dest, char *src){
    int i = 0;
    int j = 0;

    while(dest[i] != '\0')   
        i++;
    while (src[j] != '\0')
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

    char *result = ft_strcat(dest, src);

    printf("%s \n", result);

    return 0;
}