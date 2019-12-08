/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rventer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 19:20:48 by rventer           #+#    #+#             */
/*   Updated: 2019/05/28 19:20:54 by rventer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;

    i = ft_strlen(s);
    if (c == 0)
        return ((char *)s + i);
    while (i >= 0)
    {
        if (s[i] == c)
            return ((char *)s + i);
        i--;
    }
    return (NULL);
}
