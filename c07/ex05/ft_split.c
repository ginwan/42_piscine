
#include <stdio.h>
#include <stdlib.h>


int is_separator(char c, char *charset){
    int i = 0;
    while (charset[i] != '\0')
    {
        if (c == charset[i])
            return 1;
        i++;
    }
    return 0;
}

int count_words(char *str, char *charset){
    int i = 0;
    int count = 0;
    int in_word = 0;

    while (str[i])
    {
        if (is_separator(str[i], charset))
        {
            in_word = 0;
        }
        else if (in_word == 0)
        {
            count++;
            in_word = 1;
        }
        i++;
    }
    return (count);
}

char *copy_word(char *start, int len){
    int i = 0;
    
    char* word = malloc((len + 1) * sizeof(char));

    if (word == NULL)
        return NULL;

    while (i < len)
    {
        word[i] = start[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

char **ft_split(char *str, char *charset){
    int i = 0;
    char **result;
    int words = count_words(str, charset);
    int word_index;
    int start;
    int len;

    result = malloc(( words + 1) * sizeof(char *));

    if (result == NULL)
        return NULL;

    while (str[i])
    {
        while (is_separator(str[i], charset))
            i++;

        if (str[i])
        {
            start = i;

            while (str[i] && !is_separator(str[i], charset))
                i++;

            len = i - start;

            result[word_index] = copy_word(str + start, len);
            word_index++;
        }
    }

    result[word_index] = NULL;
    return result;
}

int main(void)
{
    char *str = "Hello,,world this,is,test";
    char *charset = ", ";

    char **result = ft_split(str, charset);

    int i = 0;
    while (result[i] != NULL)
    {
        printf("%s\n", result[i]);
        free(result[i]);
        i++;
    }

    free(result);

    return (0);
}