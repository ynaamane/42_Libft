/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaamane <ynaamane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 13:33:14 by ynaamane          #+#    #+#             */
/*   Updated: 2018/11/20 16:24:22 by ynaamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		*count;
	char	*s1;
	int 	**result;

	s1 = s;
	result = 0;
	if (s == NULL || c == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s1[i] = c)
		{
			
		}
	}
}
