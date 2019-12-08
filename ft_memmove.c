/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rventer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 19:13:09 by rventer           #+#    #+#             */
/*   Updated: 2019/05/28 19:13:13 by rventer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void * src, size_t len)
{
    char *tmp;

    tmp = (char *)malloc(sizeof(char) * len);
    if (tmp == NULL)
        return (NULL);
    ft_memcpy(tmp, src, len);
    ft_memcpy(dst, tmp, len);
    free(tmp);
    return (dst);
}
