/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klucchin <klucchin@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:57:32 by klucchin          #+#    #+#             */
/*   Updated: 2025/11/10 18:12:56 by klucchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n, int *is_neg)
{
	int	count;

	count = 0;
	*is_neg = (n < 0);
	if (n == 0)
		return (1);
	if (*is_neg)
		n = -n;
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count + *is_neg);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		is_neg;
	int		i;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	len = count_digits(n, &is_neg);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	if (is_neg == 1)
		str[0] = '-';
	str[len] = '\0';
	i = 0;
	if (n < 0)
		n = -n;
	while (i + is_neg < len)
	{
		str[len - i - 1] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char *t = ft_itoa(0);

//     free(t);

// 	// printf("%s\n", t);
// 	(void)t;
// 	return (0);
// }