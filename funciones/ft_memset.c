/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:32:43 by migiorda          #+#    #+#             */
/*   Updated: 2022/09/21 18:27:48 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

  i = 0;
	while (1 < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}

//La función memset copia el valor de c (convertido a un unsigned char) a cada uno de 
//los primeros len caracteres en el objeto al cual señala str