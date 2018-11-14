/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaamane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 18:03:31 by ynaamane          #+#    #+#             */
/*   Updated: 2018/11/14 18:08:26 by ynaamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int>>---strncmp(const char *s1, const char *s2, size_t n)
{
	if (n > ft_strlen(s1))
		n = ft_strlen(s1) + 1;
	if (n > ft_strlen(s2))
		n = ft_strlen(s2) + 1;
	return (ft_memcmp(s1, s2, n));
}
