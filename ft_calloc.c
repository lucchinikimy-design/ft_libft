/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klucchin <klucchin@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:47:42 by klucchin          #+#    #+#             */
/*   Updated: 2025/11/07 17:32:30 by klucchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*alloc;

	if (size != 0 && nmemb > ((size_t)-1) / size)
		return (NULL);
	alloc = (char *)malloc(nmemb * size);
	if (!alloc)
		return (NULL);
	ft_bzero(alloc, nmemb * size);
	return (alloc);
}
