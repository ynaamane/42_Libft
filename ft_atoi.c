/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaamane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 14:17:22 by ynaamane          #+#    #+#             */
/*   Updated: 2018/11/15 15:03:14 by ynaamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		atoi(const char * str)
{
	int		n;
	int		i;
	int final;

	final = 0;
	n = 0;
	i = 0;

	while ((str[i] >= 7 && str[i] <= 13 || str[i] == 32))
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			n = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		final *= 10;
		final = final + str[i] - 48
	}
	return (n * final);
}
