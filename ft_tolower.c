/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klucchin <klucchin@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:39:25 by klucchin          #+#    #+#             */
/*   Updated: 2025/11/04 16:40:52 by klucchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	int	a;

	if (c >= 65 && c <= 90)
	{
		a = c + 32;
		return (a);
	}
	return (c);
}

/*#include <stdio.h>

int	main(void)
{
	int c;
	printf("%c", ft_tolower('4'));
	return (0);
}*/