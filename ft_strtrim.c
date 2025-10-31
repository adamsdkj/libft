#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int ft_isinset(int c, const char *set)
{
    size_t i;

    i = 0;
    while (set[i])
    {
        if (c == set[i])
            return (1);
        i++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    size_t start;
    size_t end;
    size_t i;

    if (!s1 || !set)
        return (NULL);

    start = 0;
    while (s1[start] && ft_isinset(s1[start], set))
        start++;

    end = ft_strlen(s1);
    while (end > start && ft_isinset(s1[end - 1], set))
        end--;

    str = (char *)malloc(end - start + 1);
    if (!str)
        return (NULL);

    i = 0;
    while (start < end)
    {
        str[i++] = s1[start++];
    }
    str[i] = '\0';
    return (str);
}

int main(void)
{
    char *s1 = "  Hello World!  ";
    char *set = " ";
    char *result = ft_strtrim(s1, set);

    printf("'%s'\n", result);
    free(result);
    return (0);
}
