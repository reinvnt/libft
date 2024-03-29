/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rventer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 19:21:18 by rventer           #+#    #+#             */
/*   Updated: 2019/05/28 19:21:22 by rventer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    size_t i;
    size_t j;

    i = 0;
    while (i < n && s1[i] != '\0')
    {
        j = 0;
        while (i + j < n && s1[i + j] == s2[j] && s2[j] != '\0')
            j++;
        if (s2[j] == '\0')
            return ((char *)s1 + i);
        i++;
    }
    return (NULL);
}
