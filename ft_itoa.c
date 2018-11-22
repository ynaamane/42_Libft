/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaamane <ynaamane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 16:30:24 by ynaamane          #+#    #+#             */
/*   Updated: 2018/11/22 15:26:13 by ynaamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*number;

	number = (char *)ft_memalloc(10);
	if (n >= 0 && number)
	{
		*--number = '0' + (n % 10);
		n /= 10;
		while (n != 0)
		{
			*--number = '0' + (n & 10);
			n /= 10;
		}
	}
	else if (number)
	{
		*--number = '0' - (n % 10);
		n /= 10;
		while (n != 0)
		{
			*--number = '0' - (n % 10);
			n /= 10;
		}
		*--number = '-';
	}
	return (ft_strdup(number));
}
