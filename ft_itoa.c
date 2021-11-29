/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robindehouck <robindehouck@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 11:54:22 by rdehouck          #+#    #+#             */
/*   Updated: 2021/11/28 17:29:52 by robindehouc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// test des fonction static qui ne s appellent que dans le fichier courant

#include "libft.h"

char	*ft_strmall(size_t size)
{
	char	*str;

	if (!(str = (char*)malloc(sizeof(*str) * (size + 1))))
		return (NULL);
	ft_bzero(str, size + 1);
	return (str);
}

static int	count_size(int n)
{
	int i;

	i = 0;
	if (n < 0)
		n = -n;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int num)
{
	char		*dest;
	int			counter;
	int			i;
	long int	n;

	n = num;
	counter = count_size(n);
	i = 0;
	if (n < 0 || counter == 0)
		counter++;
	if (!(dest = ft_strmall(counter)))
		return (NULL);
	if (n < 0)
	{
		n = -n;
		dest[0] = '-';
		i++;
	}
	while (counter > i)
	{
		counter--;
		dest[counter] = (n % 10) + '0';
		n /= 10;
	}
	return (dest);
}
/*
int	main()
{
	printf("%s", ft_itoa(20));
}*/