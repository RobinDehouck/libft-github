/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdehouck <rdehouck@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 11:31:38 by rdehouck          #+#    #+#             */
/*   Updated: 2021/11/15 13:08:27 by rdehouck         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	g_i; //to be deleted bcs we can't use any global variable

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_delimiters(char *str, char	*charset)
{
	int	i;
	int	j;

	g_i = 0;
	i = 0;
	while (str[i])
	{
		j = 0;
		while (charset[j])
		{
			if (charset[j] == str[i])
				str[i] = 0;
			j++;
		}
		i++;
	}
	return (str);
}

char	*ft_duplicate(char *str_bis, int length)
{
	char	*duplicate;
	int		i;

	i = 0;
	duplicate = malloc(sizeof(*duplicate) * length + 1);
	while (str_bis[g_i] != 0)
	{
		duplicate[i] = str_bis[g_i];
		g_i++;
		i++;
	}
	if (g_i < length)
	{
		g_i++;
	}
	duplicate[i] = 0;
	if (duplicate[0] == 0)
		return (NULL);
	return (duplicate);
}

char	**ft_split(char *str, char *charset)
{
	int		length_str;
	int		i;
	char	*str_bis;
	char	**array;

	length_str = ft_strlen((char const *)str);
	str_bis = malloc(sizeof(*str_bis) * length_str + 1);
	str_bis = ft_strcpy(str_bis, str);
	i = 0;
	array = malloc(sizeof(*array) * length_str + 1);
	while (i < length_str)
		array[i++] = malloc(sizeof(char) * length_str + 1);
	ft_delimiters(str_bis, charset);
	i = 0;
	charset = malloc(sizeof(*charset) * length_str + 1);
	while (length_str-- > 0)
	{	
		charset = ft_duplicate(str_bis, ft_strlen(str));
		if (charset != NULL)
			array[i++] = charset;
	}
	array[i] = 0;
	return (array);
}
