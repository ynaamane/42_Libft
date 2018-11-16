/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnsrt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaamane <ynaamane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 18:41:13 by ynaamane          #+#    #+#             */
/*   Updated: 2018/11/16 14:18:26 by ynaamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;

	i = 0;
	if (needle == NULL || ft_strlen(needle) == 0)
		return((char *)needle);
	if (ft_strlen(needle) > len)
		return (NULL);
	while (i < len)
	{
		if (ft_strncmp((char *)&needle[i], needle, ft_strlen(needle)) == 0)
		{
			if (i + ft_strlen(needle) > len)
				return (NULL);
			return ((char *)&needle[i]);
		}
		i++;
	}
	return (NULL);
}
