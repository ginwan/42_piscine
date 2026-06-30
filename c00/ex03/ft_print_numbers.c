#include <unistd.h>

void ft_print_numbers(void)
{
    char num = '0';
    while (num <= '9')
    {
        write(1, &num, 1);
        num++;
    }
}

int main(void){
    ft_print_numbers();
    write(1, "\n", 1);
    return (0);
}