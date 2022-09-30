/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:44:16 by migiorda          #+#    #+#             */
/*   Updated: 2022/09/30 13:07:15 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (lst && new)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			aux = ft_lstlast(*lst);
			aux->next = new;
		}
	}
}
