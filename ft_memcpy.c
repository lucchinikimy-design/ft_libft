/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klucchin <klucchin@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 21:43:33 by klucchin          #+#    #+#             */
/*   Updated: 2025/11/04 17:32:01 by klucchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned char	*ptr;
	unsigned char	*s;
	unsigned int	i;

	s = (unsigned char *)src;
	ptr = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		ptr[i] = s[i];
		i++;
	}
	return (dest);
}
