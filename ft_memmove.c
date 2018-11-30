/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaamane <ynaamane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:17:22 by ynaamane          #+#    #+#             */
/*   Updated: 2018/11/30 15:27:23 by ynaamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*sourc;
	char	*dest;
	size_t	i;

	i = -1;
	sourc = (char *)src;
	dest = (char *)dst;
	if (sourc < dest)
		while ((int)(--len) >= 0)
			*(dest + len) = *(sourc + len);
	else
		while (++i < len)
			*(dest + i) = *(sourc + i);
	return (dst);
}
