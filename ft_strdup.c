/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaamane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 14:51:40 by ynaamane          #+#    #+#             */
/*   Updated: 2018/11/14 16:02:46 by ynaamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char>---*ft_strdup(const char *s1)
{
	int		i;
	char	*tmp;

	i = ft_strlen(s);
	tmp = malloc(i + 1);
	ft_strdup(tmp, s1);
	return (tmp);
}
