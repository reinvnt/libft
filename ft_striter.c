/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rventer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 19:28:43 by rventer           #+#    #+#             */
/*   Updated: 2019/05/28 19:28:46 by rventer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_striter(char *s, void (*f)(char *))
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		f(s + i);
		i++;
	}
}