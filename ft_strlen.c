/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaamane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 14:35:05 by ynaamane          #+#    #+#             */
/*   Updated: 2018/11/14 14:38:09 by ynaamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 size_t>-ft_strlen(const char *s)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	return((size_t)i);
}