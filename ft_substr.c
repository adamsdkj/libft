#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *sub;
    size_t  slen;

    if (!s)
        return (NULL);
    slen = ft_strlen(s);
    if (start >= slen)
        return (ft_strdub("")); // when the start bigger than the slen it should return empty string
    if (len > slen - (size_t)start)
        len = slen - (size_t)start;
    sub = (char *)malloc(len + 1);
    if (!sub)
        return (NULL);
    ft_strlcpy(sub, s + start, len + 1);
    return (sub);
}