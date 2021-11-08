/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdehouck <rdehouck@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:02:26 by rdehouck          #+#    #+#             */
/*   Updated: 2021/11/08 17:22:46 by rdehouck         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dest, char *source, size_t dest_size)
{
	size_t			supposed_size;
	unsigned long	i;
	size_t			j;
	size_t			l_dest;

	
	supposed_size = ft_strlen(dest) + ft_strlen(source);
	i = 0;
	j = 0;
	while (dest[j])
	{
		j++;
	}
	l_dest = j;
	while (source[i] != 0 && i < dest_size - l_dest)
	{
		dest[j] = source[i];
		i++;
		j++;
	}
	dest[j] = 0;
	return (supposed_size);
}
/*
int	main()

{
	char dest[100];
	char source[30] = "lorem";
	printf("%lu\n", strlcat(dest, source, 100));
	printf("%s\n", dest);
	char dest2[100];
	printf("\n%lu\n", ft_strlcat(dest2, source, 100));
	printf("%s", dest2);
}*/