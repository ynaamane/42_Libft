/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaamane <ynaamane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 17:31:22 by ynaamane          #+#    #+#             */
/*   Updated: 2018/11/29 15:24:57 by ynaamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		i2;
	char		*result;

	i = start;
	i2 = 0;
	if (s == NULL || len == 0 || s[start] == '\0')
		return (NULL);
	result = ft_memalloc(sizeof(char) * len);
	while (i2 < len && s[i])
	{
		result[i2] = (char)s[i];
		i++;
		i2++;
	}
	result[i2] = '\0';
	return (result);
}
