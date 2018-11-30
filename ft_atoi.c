/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaamane <ynaamane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 14:17:22 by ynaamane          #+#    #+#             */
/*   Updated: 2018/11/30 13:45:42 by ynaamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long	n;
	int		i;
	long	final;

	final = 0;
	n = 1;
	i = 0;
	while (((str[i] >= 7 && str[i] <= 13) || str[i] == 32))
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			n = -1;
		i++;
	}
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		if (final > (long)INT32_MAX + 1 && n == -1)
			return (0);
		if (final > (long)INT32_MAX && n == 1)
			return (-1);
		final = (final * 10) + (str[i] - 48);
		i++;
	}
	return (n * final);
}
