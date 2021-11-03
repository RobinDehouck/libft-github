/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdehouck <rdehouck@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:36:17 by rdehouck          #+#    #+#             */
/*   Updated: 2021/11/03 10:25:38 by rdehouck         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int n)
{
	unsigned char	c;

	c = (unsigned char) n;
	return (((c >= 'a' && c <= 'z')
			|| (c >= 'A' && c <= 'Z'))
		|| (c >= '0' && c <= '9'));
}
/*
int main()
{
	char t = ';';
	printf("%d",ft_isalnum(t));
}
*/