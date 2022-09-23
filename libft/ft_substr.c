/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:59:12 by migiorda          #+#    #+#             */
/*   Updated: 2022/09/23 17:37:11 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub;

	i = 0;
	j = 0;
	sub = (char *)malloc(sizeof(*str) * (len + 1));
	if (!str || !sub)
		return (NULL);
	while (str[i])
	{
		if (i >= start && j < len)
		{
			sub[j] = str[i];
			j++;
		}
		i++;
	}
	sub[j] = '\0';
	return (sub);
}
//quedan algunos errores de paco