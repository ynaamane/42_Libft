/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnsrt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaamane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 18:41:13 by ynaamane          #+#    #+#             */
/*   Updated: 2018/11/14 18:49:32 by ynaamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char>---*strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;

	i = 0;
	if (s2 == NULL || ft_strlen(s2) == 0)
		return((char *)s1);
	if (ft_strlen(s2) > n)
		return (NULL);
	while (i < n)
	{
		if (ft_strncmp((char *)&s1[i], s2, ft_strlen(s2)) == 0)
		{
			if (i + ft_strlen(s2) > n)
				return (NULL);
			return ((char *)&s1[i]);
		}
		i++;
	}
	return (NULL);
}
