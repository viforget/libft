/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viforget <viforget@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 21:56:08 by viforget          #+#    #+#             */
/*   Updated: 2019/11/01 09:21:41 by viforget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*alst;
	t_list	*nxt;

	if (!lst || !del)
		return ;
	alst = *lst;
	while (alst)
	{
		nxt = alst->next;
		del(alst->content);
		free(alst);
		alst->next = NULL;
		alst = NULL;
		alst = nxt;
	}
	*lst = NULL;
}
