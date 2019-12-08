/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rventer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 19:10:47 by rventer           #+#    #+#             */
/*   Updated: 2019/05/28 19:10:56 by rventer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    char *d;
    char *s;

    i = 0;
    d = (char *)dst;
    s = (char *)src;

    while (1 < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dst);
}
