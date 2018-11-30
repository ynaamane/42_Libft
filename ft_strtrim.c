/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaamane <ynaamane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 12:44:17 by ynaamane          #+#    #+#             */
/*   Updated: 2018/11/30 15:02:15 by ynaamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i[2];
	char	*result;

	if (s == NULL)
		return (NULL);
	i[0] = 0;
	if ((result = ft_memalloc(ft_strlen(s))) == NULL)
		return (NULL);
	ft_memcpy(result, s, ft_strlen(s));
	while (result[i[0]] && (result[i[0]] == ' ' ||
	result[i[0]] == '\n' || result[i[0]] == '\t'))
		i[0]++;
	i[1] = ft_strlen(s) - 1;
	while (i[1] > 0)
	{
		if (result[i[1]] == ' ' || result[i[1]] == '\n' || result[i[1]] == '\t')
			i[1]--;
		else
		{
			result[i[1] + 1] = '\0';
			break ;
		}
	}
	return (ft_strdup(&result[i[0]]));
}
