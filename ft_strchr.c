/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaamane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 16:43:12 by ynaamane          #+#    #+#             */
/*   Updated: 2018/11/14 17:12:47 by ynaamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char>---*strchr(const char *s, int c)
{
	int		i;

	i = 0;
	if (s = NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}
