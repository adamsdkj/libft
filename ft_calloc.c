#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *ptr;
// here because in the unsigned data type when overflowe ocures it wraps it around and start from zero
    if (nmemb && size > ((size_t)-1) / nmemb)
        return (NULL);
    ptr = malloc(nmemb * size);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, nmemb * size);
    return (ptr);
}
