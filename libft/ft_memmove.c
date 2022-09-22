/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:19:00 by migiorda          #+#    #+#             */
/*   Updated: 2022/09/22 15:04:11 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (src < dest)
	{
		while (++i <= len)
		{
			((unsigned char *)dest)[len - i] = ((unsigned char *)src)[len - i];
		}
	}
	else
	{
		while (i < len)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

#include "libft.h"
#include <stdio.h>
#include <string.h>
int main(void)
{
	char dest[5] = "hola" ;
	const char *src = "llo";
	size_t i = 4;
	printf("%s", ft_memmove(dest, src, i));
}