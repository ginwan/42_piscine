
#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max){
    int size;
    int i = 0;
    
    if (min >= max){
        *range = NULL;
        return 0;
    }
    *range = malloc((max - min) * sizeof(int));
    size = max - min;
    if (*range == NULL){
        return -1;
    }
    while (min < max)
    {
        (*range)[i] = min;
        i++;
        min++;
    }
    return size;
}

int main(void){
    int *arr;
    int min = 5;
    int max = 20;
    int i = 0;

    int res = ft_ultimate_range(&arr, min, max);

    printf("%d\n", res);
    while (i < res){
        printf("%d ", arr[i]);
        i++;
    }
    free(arr);
    return 0;
}