/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:46:09 by migiorda          #+#    #+#             */
/*   Updated: 2022/09/21 17:19:38 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	value;

	i = 0;
	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	else if (size < ft_strlen(dest))
		value = ft_strlen(src) + size;
	else
		value = ft_strlen(dest) + ft_strlen(src);
	while (dest[i] > 0)
		i++;
	while (i < size - 1 && src[j] > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (value);
}