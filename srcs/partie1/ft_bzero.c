/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robindehouck <robindehouck@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:05:18 by robindehouc       #+#    #+#             */
/*   Updated: 2021/11/04 09:29:34 by robindehouc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *string, int len)
{
    int             i;
    unsigned char   *c;

    c = string;
    i = 0;
    while (i < len)
    {
        c[i] = 0;
        i++;
    }
}
/*
int main()
{
    char array[80] = "Bonjour";
    printf("1: %s\n", array);
    ft_bzero(array, 0);
    printf("2: %s\n", array);
    bzero(array, 0);
    printf("3: %s", array);
}
*/