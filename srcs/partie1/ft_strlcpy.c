/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robindehouck <robindehouck@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 20:32:46 by robindehouc       #+#    #+#             */
/*   Updated: 2021/11/07 20:38:15 by robindehouc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlcpy(char *dest, char *source, int length)
{
	int	i;

	i = 0;
	while(i < length)
	{
		dest[i] = source[i];
		i++;
	}
	return (dest);
}

/*
int main()
{
	char dest[30];
	char source[] = "bonjour c est source";

	printf("%s", ft_strlcpy(dest, source, 10));
}
*/