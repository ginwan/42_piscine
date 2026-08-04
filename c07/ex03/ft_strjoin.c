
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

// copy string
char *ft_strcpy(char *dest, char *src){
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    return dest;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		total_len;
	int		pos;
	int		i;

	/* If there are no strings */
	if (size == 0)
	{
		dest = malloc(1);
		if (!dest)
			return (NULL);
		dest[0] = '\0';
		return (dest);
	}

	/* Calculate total length */
	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len += (size - 1) * ft_strlen(sep) + 1;

	/* Allocate memory */
	dest = malloc(total_len);
	if (!dest)
		return (NULL);

	/* Build the final string */
	pos = 0;
	i = 0;
	while (i < size)
	{
		/* Copy current string */
		// dest + pos ==> 0 + 5 this means we are copying the string to the position after the last copied string
		ft_strcpy(dest + pos, strs[i]);
		pos += ft_strlen(strs[i]);

		/* Copy separator except after the last string */
		if (i < size - 1)
		{
			ft_strcpy(dest + pos, sep);
			pos += ft_strlen(sep);
		}
		i++;
	}

	return (dest);
}

int main(void)
{
    char *strs[] = {
        "Hello",
        "Ginwan",
        "42"
    };

    char *result;

    result = ft_strjoin(3, strs, ";");

    if (result == NULL)
    {
        printf("Memory allocation failed!\n");
        return (1);
    }

    printf("%s\n", result);

    free(result);

    return (0);
}