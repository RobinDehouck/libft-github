/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robindehouck <robindehouck@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 20:31:03 by robindehouc       #+#    #+#             */
/*   Updated: 2021/11/07 20:31:35 by robindehouc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memmove(void *dest, void *source, unsigned int bit_size)
{
	char		*cdest;
	char		*csource;
	char		ctemp[bit_size];
	unsigned int	i;

	cdest = (char *) dest;
	csource = (char *) source;
	i = 0;

	while(i < bit_size)
	{
		ctemp[i] = csource[i];
		cdest[i] = csource[i];
		i++;
	}
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