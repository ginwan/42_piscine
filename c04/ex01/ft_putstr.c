
#include <unistd.h>

int ft_putstr(char *str){
    int i = 0;
    
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
    return i;
}

int main(void){
    char str[] = "Hello, this Ginwan.";

    ft_putstr(str);
    // printf("%d\n", res);
    return 0;
}