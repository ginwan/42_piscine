#include <stdio.h>

int ft_strcmp(char *s1, char *s2){
    int i = 0;
    while (s1[i] == s2[i])
    {
        if(s1[i] == '\0') 
            return 0;
        i++;
    }
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int main(void){
    char *s1 = "Hola";
    char *s2 = "Holaaaa";

    int res = ft_strcmp(s1, s2);
    printf("Comprison result: %d\n", res);
    return 0;
}