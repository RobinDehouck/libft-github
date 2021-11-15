/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdehouck <rdehouck@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 20:31:03 by robindehouc       #+#    #+#             */
/*   Updated: 2021/11/15 16:08:46 by rdehouck         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// copier len bytes de source dans dest, overlap autorisé mais il ne faut pas
// avoir de pertes.
void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dest;
	i = 0;
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
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