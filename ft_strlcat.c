/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klucchin <klucchin@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 13:24:49 by klucchin          #+#    #+#             */
/*   Updated: 2025/11/05 17:51:03 by klucchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned char	dst_len;
	unsigned char	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (!dst)
		return (src_len);
	if (size <= 0)
		return (src_len);
	if (size <= dst_len)
		return (src_len + size);
	i = 0;
	while (i + dst_len < size - 1 && i < src_len)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	return (dst_len + src_len);
}

// #include <bsd/string.h>

// int main()
// {
//     char dest[20] = "bonjour";
//     char src[7] = "olives";
//     int i = ft_strlcat(dest, src, 3);
//     i = ft_strlcat(dest, src, 3);
//     i = ft_strlcat(dest, src, 3);
//     i = ft_strlcat(dest, src, 3);
//     i = ft_strlcat(dest, src, 3);
//     i = ft_strlcat(dest, src, 3);
//     i = ft_strlcat(dest, src, 3);
//     i = ft_strlcat(dest, src, 3);
//     i = ft_strlcat(dest, src, 3);
//     i = ft_strlcat(dest, src, 3);
//     printf("\'%s\': %d\n", dest, i);
// }
