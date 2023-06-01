/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asekmani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 08:14:47 by asekmani          #+#    #+#             */
/*   Updated: 2022/11/29 16:21:42 by asekmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	if (!lst || !del)
	{
		if (lst)
		{
			*lst = NULL;
		}
		return ;
	}
	while ((*lst) != NULL)
	{
		ptr = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = ptr;
	}
}
