/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robindehouck <robindehouck@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 23:14:40 by robindehouc       #+#    #+#             */
/*   Updated: 2021/11/12 11:35:16 by robindehouc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *source1, char const *source2)
{
	char	*joined;
	int		length;
	int		i;
	int		j;

	i = 0;
	j = 0;
	length = ft_strlen(source1) + ft_strlen(source2);
	if (!(joined = malloc(sizeof(joined) + length + 1)))
		return (NULL);
	while(source1[i])
	{
		joined[i] = source1[i];
		i++;
	}
	while(source2[j])
	{
		joined[i] = source2[j];
		i++;
		j++;
	}
	joined[i] = 0;
	return (joined);
}
/*
int	main()
{
	printf("%s", ft_strjoin("", "1"));
}*/