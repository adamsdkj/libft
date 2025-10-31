#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	total_len;
	size_t	copied;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	total_len = dst_len + src_len;
	copied = 0;
	if (size <= dst_len)
		return (size + src_len);
	while (dst_len < size - 1 && src[copied])
		dst[dst_len++] = src[copied++];
	dst[dst_len] = '\0';
	return (total_len);
}