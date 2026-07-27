
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

int ft_check_base(char *base){
    int i = 0;
    int j;

    if(ft_strlen(base) < 2)
        return 0;

    while (base[i])
    {
        j = i + 1;
        if (base[i] == '-' || base[i] == '+' || (base[i] < 32 && base[i] > 126)){
            return 0;
        }
        // doublicate check
        while (base[j])
        {
            if(base[i] == base[j])
                return 0;
            j++;
        }
        i++;
    }
    return 1;
}


void ft_putnbr_base(int nbr, char *base){
    char	box[32];
	long	n;
	int		size;
	int		i;

	if (!ft_check_base(base))
		return ;
	size = ft_strlen(base);
	n = nbr;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	i = 0;
	while (n > 0)
	{
		box[i] = base[n % size];
		n = n / size;
		i++;
	}
	while (--i >= 0)
		ft_putchar(box[i]);

}

int	main(void)
{
	int	n = 42;
	char	*hex = "0123456789abcdef";
	char	*oct = "01234567";
	char	*dec = "0123456789";
	char	*bin = "01";

	write(1, "decimal: ", 9);
	ft_putnbr_base(n, dec);
	write(1, "\nbinary: ", 9);
	ft_putnbr_base(n, bin);
	write(1, "\noctal: ", 9);
	ft_putnbr_base(n, oct);
	write(1, "\nhexadecimal: ", 13);
	ft_putnbr_base(n, hex);
	write(1, "\n", 1);
}