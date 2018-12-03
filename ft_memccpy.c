/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaamane <ynaamane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:50:11 by ynaamane          #+#    #+#             */
/*   Updated: 2018/12/03 09:45:24 by ynaamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*sourc;

	i = 0;
	dest = (unsigned char *)dst;
	sourc = (unsigned char *)src;
	while (i < n)
	{
		dest[i] = sourc[i];
		if (sourc[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
