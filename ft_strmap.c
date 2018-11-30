/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaamane <ynaamane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 14:27:09 by ynaamane          #+#    #+#             */
/*   Updated: 2018/11/30 13:50:16 by ynaamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*result;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	if ((result = ft_memalloc(ft_strlen(s))) == NULL)
		return (NULL);
	ft_strcpy(result, s);
	while (result[i])
	{
		result[i] = (*f)(result[i]);
		i++;
	}
	return (result);
}
