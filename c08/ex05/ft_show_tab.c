
#include <unistd.h>
#include "ft_stock_str.h"

t_stock_str *ft_strs_to_tab(int ac, char **av);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int i = 0;

    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

void	ft_putnbr(int nb)
{
	long int	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 0 && n <= 9)
	{
		ft_putchar(n + '0');
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

void ft_show_tab(t_stock_str *par){
    int i;

    i = 1;
    while (par[i].str != 0)
    {
        ft_putstr(par[i].str);
        write(1, "\n", 1);

        ft_putnbr(par[i].size);
        write(1, "\n", 1);

        ft_putstr(par[i].copy);
        write(1, "\n", 1);

        i++;
    }
}

int main(int argc, char **argv)
{
    t_stock_str *tab;

    tab = ft_strs_to_tab(argc, argv);
    if (tab == NULL)
        return (1);

    ft_show_tab(tab);

    return (0);
}