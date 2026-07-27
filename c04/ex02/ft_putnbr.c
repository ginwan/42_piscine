
#include <unistd.h>

void putchr(char c){
    write(1, &c, 1);
    write(1, "\n", 1);
}

void ft_putnbr(int nb){
   long int	n;

	n = nb;
	if (n < 0)
	{
		putchr('-');
		n = -n;
	}
	if (n >= 0 && n <= 9)
	{
		putchr(n + '0');
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}

}

int main(void){
    ft_putnbr(42);
    return 0;
}