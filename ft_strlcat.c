/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rventer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 19:15:26 by rventer           #+#    #+#             */
/*   Updated: 2019/05/28 19:15:29 by rventer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t j;
    size_t k;

    j = 0;
    k = 0;
    while (dst[j] && j < size)
        j++;
    while ((src[k]) && ((j + k + 1) < size))
    {
        dst[j + k] = src[k];
        k++;
    }
    if (j != size)
        dst[j + k] = '\0';
    return (j + ft_strlen(src));
}