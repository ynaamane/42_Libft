/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaamane <ynaamane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 13:33:14 by ynaamane          #+#    #+#             */
/*   Updated: 2018/11/20 17:28:19 by ynaamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		i2;
	int		i3;
	int		*count;
	char	*s1;
	int 	**result;

	i = 0;
	i2 = 0;
	s1 = s;
	result = 0;
	if (s == NULL || c == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		i2 = 0;
		if (s1[i] = c)
		{
			while (s1[i2] != c)
			strcpy(result[count[i3]], s1[i2]);
			i2++;
		}
		i++;
	}
	return (**result);
}
