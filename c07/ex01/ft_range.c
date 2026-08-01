
#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max){
    int *range;
    int i = 0;

    if (min >= max)
        return NULL;
    range = malloc((max - min) * sizeof(int));
    if (range == NULL)
        return (NULL);

    while (min < max){
        range[i] = min;
        min++;
        i++; 
    }
    return range;
}

int main(void){
    int* res = ft_range(5, 20);
    int i = 0;
    while (i < 20 - 5)
    {
        printf("%d ", res[i]);
        i++;
    }
    
    free(res);
    return 0;
}