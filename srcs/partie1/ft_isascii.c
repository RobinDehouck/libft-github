/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdehouck <rdehouck@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:27:06 by rdehouck          #+#    #+#             */
/*   Updated: 2021/11/03 10:41:00 by rdehouck         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int n)
{
	unsigned char	c;

	c = (unsigned char) n;
	return (c >= 0 && c <= 127);
}
/*
int	main()
{
	char t = '~';
	printf("%d", ft_isascii(t));
	return 0;
}
*/