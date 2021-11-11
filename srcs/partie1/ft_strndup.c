/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robindehouck <robindehouck@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 19:14:28 by robindehouc       #+#    #+#             */
/*   Updated: 2021/11/11 19:23:42 by robindehouc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *source, size_t n)
{
	char	*copy;
	int		i;

	i = 0;
	copy = malloc(n * sizeof(copy));
	while (i < n && source[i])
	{
		copy[i] = source[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
int main()
{
	char *source = "Bonjour";
	printf("%s", ft_strndup(source, 25));
}*/