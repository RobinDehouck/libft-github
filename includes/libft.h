/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdehouck <rdehouck@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:59:46 by rdehouck          #+#    #+#             */
/*   Updated: 2021/11/08 16:10:33 by rdehouck         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

//includes
# include <stdio.h>
# include <stdlib.h>

int		ft_isalpha(int n);
int		ft_isdigit(int n);
int		ft_isalnum(int n);
int		ft_isascii(int n);
int		ft_isprint(int n);
int		ft_strlen(char *str);
void	*ft_memset(void *buf, int c, int len);
void	ft_bzero(void *string, int len);
void	*ft_memcpy(void *dest, void *source, unsigned int bit_size);
void	*ft_memmove(void *dest, void *source, unsigned int bit_size);
size_t	ft_strlcpy(char *dest, char *source, size_t length);
size_t	ft_strlcat(char *dest, char *source, size_t dest_size);

#endif