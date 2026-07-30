
#include <unistd.h>

void	ft_putchar(char name)
{
	write(1, &name, 1);
}

int main(int argc, char **argv){
    int i = 1;
    int j;

    while (i < argc){
        j = 0;
        while (argv[i][j])
        {
            ft_putchar(argv[i][j]);
            j++;
        }
        ft_putchar('\n');
        i++;  
    }
    return 0;
}