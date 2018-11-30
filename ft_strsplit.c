/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaamane <ynaamane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 13:33:14 by ynaamane          #+#    #+#             */
/*   Updated: 2018/11/30 12:53:51 by ynaamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_it(void **tab, int x)
{
	int		i;

	i = 0;
	while (i < x)
	{
		ft_memdel(&tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static int	ft_nbwords(char *s, char c)
{
	int		i;
	int		is_word;

	i = 0;
	is_word = 0;
	while (*s)
	{
		if (is_word == 0 && *s != c)
		{
			is_word = 1;
			i++;
		}
		else if (is_word == 1 && *s == c)
			is_word = 0;
		s++;
	}
	return (i);
}

static int	ft_strlenlim(char *s, char c)
{
	int		len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	int		nb_ofwords;
	char	**tab;
	int		i;

	if (!s)
		return (free_it(tab, c));
	nb_ofwords = ft_nbwords((char *)s, c);
	tab = (char **)malloc((nb_ofwords + 1) * sizeof(char*));
	i = 0;
	if (!tab)
		return (NULL);
	while (nb_ofwords--)
	{
		while (*s == c && *s != '\0')
			s++;
		tab[i] = ft_strsub((char *)s, 0, ft_strlenlim((char *)s, c));
		if (!tab[i])
			return (NULL);
		s = s + ft_strlenlim((char *)s, c);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
