/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaamane <ynaamane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 15:16:47 by ynaamane          #+#    #+#             */
/*   Updated: 2018/11/16 14:12:45 by ynaamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int c)
{
	if ((c > 64 && c < 91) ||(c > 96 && c <= 122))
		return (1);
	return (0);
}
