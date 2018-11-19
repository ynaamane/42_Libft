/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaamane <ynaamane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 13:52:36 by ynaamane          #+#    #+#             */
/*   Updated: 2018/11/19 14:04:46 by ynaamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		i;
	int		i2;

	i = 0;
	i2 = 0;

	if (f != NULL && s != NULL)
	{
		i = ft_strlen(s);
		while (i2 < 0)
		{
			(*f)(i2, s);
			s++;
			i2++;
		}
	}
}
