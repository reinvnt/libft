/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rventer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 20:00:25 by rventer           #+#    #+#             */
/*   Updated: 2019/05/28 20:00:27 by rventer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* RIEW THIS CODE!!! */
/* RIEW THIS CODE!!! */
/* RIEW THIS CODE!!! */
/* RIEW THIS CODE!!! */
/* RIEW THIS CODE!!! */


#include "libft.h"

void    ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (del != NULL && alst != NULL)
	{
		del((**alst).content, (**alst).content_size);
		free(*alst);
		*alst = NULL;
	}
}