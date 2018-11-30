/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaamane <ynaamane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 15:17:24 by ynaamane          #+#    #+#             */
/*   Updated: 2018/11/30 14:19:05 by ynaamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char		*string1;
	unsigned const char		*string2;

	string1 = (unsigned const char*)s1;
	string2 = (unsigned const char*)s2;
	while (n)
	{
		if (*string1 != *string2)
			return (*string1 - *string2);
		string1++;
		string2++;
		n--;
	}
	return (0);
}
