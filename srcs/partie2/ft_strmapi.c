/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdehouck <rdehouck@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:34:37 by rdehouck          #+#    #+#             */
/*   Updated: 2021/11/15 17:23:27 by rdehouck         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*array;

	i = 0;
	array = malloc (sizeof(array) * ft_strlen(s));
	if (array == NULL)
		return (NULL);
	while (s[i])
	{
		array[i] = f(i, s[i]);
		i++;
	}
	return (array);
}
