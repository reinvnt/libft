/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rventer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 20:00:58 by rventer           #+#    #+#             */
/*   Updated: 2019/05/28 20:00:59 by rventer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void    ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
    t_list	*tmp;
	t_list	*next;

    tmp = *alst;
	if (del != NULL)
	{
        while (tmp != NULL)
		{
            next = tmp->next;
			del(tmp->content, tmp->content_size);
			free(tmp);
			tmp = next;
		}
        *alst = NULL;
    }
}
