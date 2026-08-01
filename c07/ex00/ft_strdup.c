
#include <stdio.h>
#include <stdlib.h>

// String duplicate

// First find string length so we will use strlen function
int ft_strlen(char *str){
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

// copy string
char *ft_strcpy(char *dest, char *src){
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    return dest;
}

char *ft_strdup(char *src){
    // string length
    int len = ft_strlen(src);
    // memory allocation
    char *dest = malloc((len + 1) * sizeof(char));

    if (dest == NULL)
        return (NULL);

    ft_strcpy(dest, src);
    return dest;
}

int main(void){
    char* res = ft_strdup("Ginwan");
    printf("Duplicated string: %s\n", res);
    free(res);
    return 0;
}