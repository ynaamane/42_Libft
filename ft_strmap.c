/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaamane <ynaamane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 14:27:09 by ynaamane          #+#    #+#             */
/*   Updated: 2018/11/19 14:56:00 by ynaamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*result;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	result = ft_memalloc(ft_strlen(s));
	ft_strcpy(result, s);
	while (result[i])
	{
		result[i] = (*f)(result[i]);
		i++;
	}
	return (result);
}
