/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaamane <ynaamane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 17:58:58 by ynaamane          #+#    #+#             */
/*   Updated: 2018/11/30 14:20:46 by ynaamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int	i;
	char			*result;

	i = 0;
	while (i < ft_strlen(haystack))
	{
		if (ft_strncmp((char *)&haystack[i], needle, ft_strlen(needle)) == 0)
			return (result = (char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
