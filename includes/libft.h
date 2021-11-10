/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdehouck <rdehouck@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:59:46 by rdehouck          #+#    #+#             */
/*   Updated: 2021/11/10 16:54:06 by rdehouck         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

//includes
# include <stdio.h>
# include <stdlib.h>

int			ft_isalpha(int n);
int			ft_isdigit(int n);
int			ft_isalnum(int n);
int			ft_isascii(int n);
int			ft_isprint(int n);
size_t		ft_strlen(const char *str);
void		*ft_memset(void *buf, int c, int len);
void		ft_bzero(void *string, int len);
void		*ft_memcpy(void *dest, void *source, unsigned int bit_size);
void		*ft_memmove(void *dest, void *source, unsigned int bit_size);
size_t		ft_strlcpy(char *dest, char *source, size_t length);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
int			ft_toupper(int c);
int			ft_tolower(int c);
char		*ft_strchr(const char *source, int c);
char		*ft_strrchr(const char *source, int c);
int			ft_strncmp(const char *source1, const char *source2, size_t n);
void		*ft_memchr(const void *source, int c, size_t n);
int			ft_memcmp(const void *source1, const void *source2, size_t n);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);

#endif