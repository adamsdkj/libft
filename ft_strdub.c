#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	size_t	len;

	len = ft_strlen(s);
	d = malloc(len + 1);
	if (d == NULL)
		return (NULL);
	ft_strlcpy(d, s, len + 1);
	return (d);
}