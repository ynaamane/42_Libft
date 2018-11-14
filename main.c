/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaamane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 10:48:33 by ynaamane          #+#    #+#             */
/*   Updated: 2018/11/13 15:50:53 by ynaamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int argc, char *argv[])
{
	char	*p1;
	char	*p2;

	if (argc != 3)
		return (1);
	p1 = (char *)ft_memchr((const void *)argv[argc - 2], (int)argv[argc - 1][0], strlen(argv[argc - 2]));
	p2 = (char *)ft_memchr((const void *)argv[argc - 2], (int)argv[argc - 1][0], strlen(argv[argc - 2]));
	write(1, p1, strlen(p1));
	write(1, "\n", 1);
	write(1, p2, strlen(p2));
	write(1, "\n", 1);
	return (0);
}
