/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rventer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 19:14:42 by rventer           #+#    #+#             */
/*   Updated: 2019/05/28 19:14:47 by rventer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    char *str;
    size_t i;

    i = 0;
    str = (char *)s;
    while (i < n)
    {
        if ((unsigned char)str[i] == (unsigned char)c)
            return ((char *)s + i);
        i++;
    }
    return (NULL);
}