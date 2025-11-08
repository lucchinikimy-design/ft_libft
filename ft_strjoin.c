/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klucchin <klucchin@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 15:17:26 by klucchin          #+#    #+#             */
/*   Updated: 2025/11/08 16:00:03 by klucchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*mallocing(size_t i, size_t j, char const *s1, char const *s2)
{
	char	*s3;

	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	s3 = malloc(i + j + 1);
	return (s3);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	i;
	size_t	k;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	s3 = mallocing(i, 0, s1, s2);
	k = 0;
	while (s1[k] != '\0')
	{
		s3[k] = s1[k];
		k++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		s3[k] = s2[i];
		k++;
		i++;
	}
	s3[k] = 0;
	return (s3);
}

// int main()
// {
//     printf("%s", ft_strjoin("Hello ", "World"));
//     return (0);
// }