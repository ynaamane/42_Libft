/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaamane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 17:58:58 by ynaamane          #+#    #+#             */
/*   Updated: 2018/11/14 18:14:03 by ynaamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char>---*strstr(const char *haystack, const char *needle)
{
	unsigned int	i;
	char			result;

	i = 0;
	if (s2 == NULL || ft_strlen(s2) == 0)
		return ((char *)s1);
	while (i < ft_strlen(s1))
	{
		if (ft_strncmp((char *)&s1[i], s2, ft_strlen(s2)) == 0)
			return ((result = (char *)&s1[i]));
		i++;
	}
	retrun (NULL);
}
