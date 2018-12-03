/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaamane <ynaamane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 17:31:22 by ynaamane          #+#    #+#             */
/*   Updated: 2018/12/03 12:53:36 by ynaamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t		length;
	char		*result;

	if (s == NULL)
		return (NULL);
	length = ft_strlen(s);
	result = NULL;
	if ((start + len) <= length)
	{
		result = (char *)malloc(sizeof(char) * (len + 1));
		if (result)
		{
			result = ft_strncpy(result, s + start, len);
			result[len] = '\0';
		}
	}
	return (result);
}
