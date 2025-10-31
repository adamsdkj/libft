#include "libft.h"
size_t	ft_strlen(const char *s)
{
	char	*p;

	p = (char *)s;
	while (*p)
		p++;
	return (p - s);
}