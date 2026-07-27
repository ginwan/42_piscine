
#include <unistd.h>
#include <stdio.h>


int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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

int	main(void)
{
	printf("%d\n", ft_atoi_base("101010", "01"));
	printf("%d\n", ft_atoi_base("2A", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("2a", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("52", "01234567"));
	printf("%d\n", ft_atoi_base("  ---+--+1234", "0123456789"));

	return (0);
}