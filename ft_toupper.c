/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klucchin <klucchin@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:38:58 by klucchin          #+#    #+#             */
/*   Updated: 2025/11/04 16:39:00 by klucchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	int	a;

	if (c >= 97 && c <= 122)
	{
		a = c - 32;
		return (a);
	}
	return (c);
}

/*#include <stdio.h>

int	main(void)
{
	int c;
	printf("%c", ft_toupper('a'));
	return(0);
}*/