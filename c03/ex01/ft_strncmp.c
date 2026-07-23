#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n){
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && i <= n)
    {
        if(s1[i] != s2[i]) 
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        i++;
    }
    if (i < n)
		return (s1[i] - s2[i]);
    return 0;
}

int main(void){
    char *s1 = "Hola";
    char *s2 = "Hola";

    int res = ft_strncmp(s1, s2, 3);
    printf("Comprison result: %d\n", res);
    return 0;
}