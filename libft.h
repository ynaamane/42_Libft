/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaamane <ynaamane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:01:52 by ynaamane          #+#    #+#             */
/*   Updated: 2018/11/14 18:42:21 by ynaamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strcpy(char *dst, const char *src);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char>---*ft_strcat(chat*s1, const char *s2);
char>---*strncat(char>--*s1, const char *s2, size_t n);
char	*strchr(const char *s, int c);
char>---*strrchr(const char *s, int c);
char	*strstr(const char *haystack, const char *needle);
int		strncmp(const char *s1, const char *s2, size_t n);
char	*strnstr(const char *haystack, const char *needle, size_t len);

#endif
