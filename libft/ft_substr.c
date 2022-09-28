/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:59:12 by migiorda          #+#    #+#             */
/*   Updated: 2022/09/28 10:35:42 by migiorda         ###   ########.fr       */
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
	if (len > ft_strlen(str))
		len = ft_strlen(str);
	sub = (char *)malloc(sizeof(char) * (len + 1));
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
