/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_words.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:42:39 by migiorda          #+#    #+#             */
/*   Updated: 2022/10/07 13:11:27 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//character

void	ft_putchar_len(char c, int *len)
{
	write(1, &c, 1);
	len++;
	//(*len)++;
}

//string

void	ft_string(char *args, int *len)
{
	size_t	i;

	i = 0;
	if (!args)
	{
		write(1, "(null)", 6);
		len += 6;
		//(*len) += 6;
		return ;
	}
	while ((args[i] != '\0'))
	{
		ft_putchar_len(args[i], len);
		i++;
	}
}