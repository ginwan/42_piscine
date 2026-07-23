
#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    if (to_find[0] == '\0')
        return (str);

    i = 0;
    while (str[i] != '\0')
    {
        j = 0;
        while (str[i + j] != '\0' && str[i + j] == to_find[j])
        {
            j++;
        }
        if (to_find[j] == '\0')
            return (&str[i]);
        i++;
    }
    return (0);
}

int main(void){
    char str[] = "How are you?";
    char to_find[] = "are";

    char *result = ft_strstr(str, to_find);

    printf("%s \n", result);

    return 0;
}