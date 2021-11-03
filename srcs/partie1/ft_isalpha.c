/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdehouck <rdehouck@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:37:21 by rdehouck          #+#    #+#             */
/*   Updated: 2021/11/03 10:02:35 by rdehouck         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int n)
{
	unsigned char	chartocheck;

	chartocheck = (unsigned char) n;
	return ((chartocheck >= 'a' && chartocheck <= 'z')
		|| (chartocheck >= 'A' && chartocheck <= 'Z'));
}
