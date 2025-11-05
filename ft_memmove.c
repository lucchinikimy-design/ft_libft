/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klucchin <klucchin@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:35:21 by klucchin          #+#    #+#             */
/*   Updated: 2025/11/05 18:05:03 by klucchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned long int	dstp;
	unsigned long int	srcp;
	int					i;

	if (!dest || !src)
		return (NULL);
	dstp = (long int)dest;
	srcp = (long int)src;
	if (dstp - srcp >= n)
		dest = ft_memcpy(dest, src, n);
	else
	{
		dstp += n;
		srcp += n;
		i = n - 1;
		while (i >= 0)
		{
			*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
			i--;
		}
	}
	return (dest);
}

// int main()
// {
// 	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
// 	ft_memmove(sResult + 1, sResult, 2);
// }