/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robindehouck <robindehouck@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 00:26:21 by robindehouc       #+#    #+#             */
/*   Updated: 2021/11/16 00:34:23 by robindehouc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		i;
	char	c;
	char temp;

	c = '\n';
	i = 0;
	while (s[i])
	{
		temp = s[i];
		write(fd, &temp, 1);
		i++;
	}
	write(fd, &c, 1);
}