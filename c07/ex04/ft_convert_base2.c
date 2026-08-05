

#include <stdio.h>
#include <stdlib.h>

// First find string length so we will use strlen function
int ft_strlen(char *str){
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

// this for check the base_from and base_to
int	ft_check_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| base[i] == ' '
			|| (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	result;
	int	base_len;
	int	digit;

	if (!ft_check_base(base))
		return (0);

	base_len = ft_strlen(base);
	sign = 1;
	result = 0;

	/* Skip whitespace */
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;

	/* Read signs */
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}

	/* Convert number */
	while ((digit = ft_index(*str, base)) != -1)
	{
		result = result * base_len + digit;
		str++;
	}

	return (result * sign);
}


int ft_nbrlen_base(int nbr, int base_len){
    int len;
    long n;

    n = nbr;
    if (n == 0)
        return (1);

    if (n < 0) {
        len++;
        n *= -1;
    }

    if (n > 0){
        n /= base_len;
        len++;
    }
    return (len);
}

// reverse string function
void ft_reverse(char *str, int len)
{
    int i;
    char tmp;

    i = 0;
    // we did the swap to change the original string
    while (i < len / 2)
    {
        tmp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = tmp;
        i++;
    }
}


char* ft_putnbr_base(int nbr, char *base){
    char*	result;
	long	n;
	int		size;
	int		i;

    if (!ft_check_base(base))
		return NULL;

    int len = ft_nbrlen_base(nbr, ft_strlen(base));
    result = malloc(len + 1);

    if (result == NULL)
        return NULL;

	size = ft_strlen(base);
	n = nbr;

    if (n == 0)
    {
        result[0] = base[0];
        result[1] = '\0';
        return result;
    }

    // converting the number process
	while (n > 0)
	{
		result[i] = base[n % size];
		n = n / size;
		i++;
	}

    // Printing backwards "reverse the result string"
	if (nbr < 0)
        ft_reverse(result + 1, i - 1);
    else
        ft_reverse(result, i);
    
    result[i] = '\0';
    return result;
}