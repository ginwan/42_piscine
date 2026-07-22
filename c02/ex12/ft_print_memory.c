
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void ft_print_ascii(unsigned char *p, unsigned int size)
{
    unsigned int i = 0;

    while (i < size)
    {
        if (p[i] >= 32 && p[i] <= 126)
            ft_putchar(p[i]);
        else
            ft_putchar('.');
        i++;
    }
}

void ft_print_hex(unsigned char *p, unsigned int size)
{
    unsigned int i = 0;

    while (i < 16)
    {
        if (i < size)
            ft_puthex(p[i]);
        else
            write(1, "  ", 2);

        if (i % 2)
            ft_putchar(' ');

        i++;
    }
}

void ft_putaddr(unsigned long addr)
{
    char *hex = "0123456789abcdef";
    int shift = (sizeof(unsigned long) * 8) - 4;

    while (shift >= 0)
    {
        ft_putchar(hex[(addr >> shift) & 0xF]);
        shift -= 4;
    }
}

void *ft_print_memory(void *addr, unsigned int size)
{
    unsigned char *p;
    unsigned int i;
    unsigned int line_size;

    p = (unsigned char *)addr;
    i = 0;

    while (i < size)
    {
        ft_putaddr((unsigned long)(p + i));
        write(1, ": ", 2);

        if (size - i >= 16)
            line_size = 16;
        else
            line_size = size - i;

        ft_print_hex(p + i, line_size);
        ft_print_ascii(p + i, line_size);
        ft_putchar('\n');

        i += 16;
    }
    return (addr);
}

int main(void)
{
    char str[] = "Bonjour les aminches\t\n\tc\a est fou\t"
                 "tout\tce qu on peut faire avec\t\n\t"
                 "print_memory\n\n\n\tlol.lol\n ";

    ft_print_memory(str, sizeof(str));

    return (0);
}