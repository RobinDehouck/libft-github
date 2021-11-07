/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robindehouck <robindehouck@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:59:46 by rdehouck          #+#    #+#             */
/*   Updated: 2021/11/07 20:27:06 by robindehouc      ###   ########.fr       */
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
void	ft_memcpy (void *dest, void *source, unsigned int bit_size);
void	ft_memmove(void *dest, void *source, unsigned int bit_size);

#endif