/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaamane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 17:58:58 by ynaamane          #+#    #+#             */
/*   Updated: 2018/11/16 13:50:54 by ynaamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int	i;
	char			result;

	i = 0;
	if (needle == NULL || ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (i < ft_strlen(haystack))
	{
		if (ft_strncmp((char *)&haystack[i], needle, ft_strlen(needle)) == 0)
			return ((result = (char *)&haystack[i]));
		i++;
	}
	return (NULL);
}
