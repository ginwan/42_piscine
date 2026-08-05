
#include <stdio.h>

// This same like import the function from another file
char *ft_putnbr_base(int nbr, char *base);
int ft_atoi_base(char *str, char *base);
int ft_check_base(char *base);


char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    int number;

    if (!ft_check_base(base_from) || !ft_check_base(base_to))
        return NULL;

    number = ft_atoi_base(nbr, base_from);

    return ft_putnbr_base(number, base_to);
}

int main(void){
    char* res = ft_convert_base("42", "0123456789", "01");
    printf("%s\n", res);
    return 0;
}