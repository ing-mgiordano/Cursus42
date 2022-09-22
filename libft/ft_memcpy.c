/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:42:13 by migiorda          #+#    #+#             */
/*   Updated: 2022/09/22 14:59:55 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

//Copia los primeros n caracteres del objeto apuntado por s2 al objeto apuntado por s1

#include "libft.h"
#include <stdio.h>
#include <string.h>
int main(void)
{
	char *dest = "hola" ;
	const char *src = "llo";
	size_t i = 1;
	printf("%s", memcpy(dest, src, i));
}