/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaamane <ynaamane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:17:22 by ynaamane          #+#    #+#             */
/*   Updated: 2018/11/09 13:53:39 by ynaamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*cpy;

	if (src == NULL || dst == NULL)
		return (NULL);
	if (!(cpy = (char*)malloc(sizeof(char*) * len)))
		return (NULL);
	cpy = ft_strncpy(cpy, src, len);
	dst = (void*)ft_strncpy(dst, cpy, len);
	free(cpy);
	return (dst);
}
