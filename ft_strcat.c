/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaamane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 16:04:02 by ynaamane          #+#    #+#             */
/*   Updated: 2018/11/14 16:13:13 by ynaamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		i;
	int		p;

	i = 0;
	p = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[p] !+ '\0')
	{
		dest[i + p] = s2[p];
		p++;
	}
	s1[i + p] = '\0';
	return (s1);
}
