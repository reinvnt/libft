/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rventer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 18:49:26 by rventer           #+#    #+#             */
/*   Updated: 2019/05/29 20:57:03 by rventer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	unsigned char	*ptr;

	ptr = b;
	i = 0;
	while (i < len)
		ptr[i++] = (unsigned char)c;
	return (b);
}
