/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaamane <ynaamane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 17:13:19 by ynaamane          #+#    #+#             */
/*   Updated: 2018/11/16 14:53:26 by ynaamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*t;

	i = 0;
	t = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			t = ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		t = ((char *)&s[i]);
	return (t);
}
