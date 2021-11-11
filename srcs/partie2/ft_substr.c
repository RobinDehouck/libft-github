/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robindehouck <robindehouck@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 23:00:09 by robindehouc       #+#    #+#             */
/*   Updated: 2021/11/11 23:13:07 by robindehouc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *source, unsigned int start, size_t len)
{
	int		i;
	char	*substring;

	i = 0;
	substring = malloc(sizeof(substring) * len);
	if (substring == NULL)
		return (NULL);
	while (source[start] && i < len)
	{
		substring[i] = source[start];
		i++;
		start++;
	}
	substring[i] = 0;
	return (substring);
}
/*
int	main()
{
	char *source = " Bonjour ";
	printf("%s", ft_substr(source, 0, 3));
}*/