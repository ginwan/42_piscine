
#include<stdio.h>

int ft_sqrt(int nb){
    int i = 1;
    if (nb < 0)
        return (0);
    while (i * i < nb)
        i++;
    if (i * i == nb)
        return i;
    return 0;

}

int main(void){
    printf("%d\n", ft_sqrt(8));
    return 0;
}