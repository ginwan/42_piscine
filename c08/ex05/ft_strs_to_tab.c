
#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		src_size;
	char	*dup;
	char	*temp;

	src_size = ft_strlen(src);
	dup = (char *)malloc(sizeof(char) * src_size + 1);
	if (dup == NULL)
		return ((char *) NULL);
	temp = dup;
	while (*src)
	{
		*temp = *src;
		temp++;
		src++;
	}
	*temp = '\0';
	return (dup);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av){
    int i = 0;
    t_stock_str *result;
    result = malloc((ac + 1) * sizeof(*result));

    if(result == NULL)
        return NULL;

    while(av[i]){
        result[i].str = av[i];
        result[i].size =  ft_strlen(av[i]);
        result[i].copy = ft_strdup(av[i]);
       if (result[i].copy == NULL)
        {
            while (i > 0)
            {
                i--;
                free(result[i].copy);
            }
            free(result);
            return NULL;
        }
        i++;
    }
    result[i].str = 0;
    return result;

}

// int main(int argc, char **argv)
// {
//     int i;
//     t_stock_str *result;

//     result = ft_strs_to_tab(argc, argv);
//     if (result == NULL)
//         return (1);

//     i = 0;
//     while (result[i].str != 0)
//     {
//         printf("String: %s\n", result[i].str);
//         printf("Size: %d\n", result[i].size);
//         printf("Copy: %s\n", result[i].copy);
//         printf("--------\n");

//         free(result[i].copy);
//         i++;
//     }

//     free(result);
//     return (0);
// }