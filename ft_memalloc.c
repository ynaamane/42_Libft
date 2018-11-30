/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaamane <ynaamane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 10:22:33 by ynaamane          #+#    #+#             */
/*   Updated: 2018/11/30 15:56:08 by ynaamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*result;

	if (size >= INT32_MAX)
		return (NULL);
	result = malloc(size + 1);
	if (result != NULL)
		ft_memset(result, '\0', size + 1);
	return (result);
}
