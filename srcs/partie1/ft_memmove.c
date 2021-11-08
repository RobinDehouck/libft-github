/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdehouck <rdehouck@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 20:31:03 by robindehouc       #+#    #+#             */
/*   Updated: 2021/11/08 13:36:24 by rdehouck         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *source, unsigned int bit_size)
{
	char			*cdest;
	char			*csource;
	char			*ctemp;
	unsigned int	i;

	ctemp = malloc(sizeof(ctemp) * bit_size);
	cdest = (char *)dest;
	csource = (char *)source;
	i = 0;
	while (i < bit_size)
	{
		ctemp[i] = csource[i];
		cdest[i] = csource[i];
		i++;
	}
	return (dest);
}
/*
int main()
{
	int isource[] = {10, 20, 30, 40, 50};

	int n = sizeof(isource) / sizeof(isource[0]);
	//sizeof(isource = 4+4+4+4+4 = 20, and isource[0] = 4,
	//so this expression result in the number of elements.

	int idest[n];
	ft_memmove(idest, isource, sizeof(isource));
	
	int i = 0;
	while (i < n)
	{
		printf("%d\n", idest[i]);
		i++;
	}
}
*/