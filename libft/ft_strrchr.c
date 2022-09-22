/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:22:35 by migiorda          #+#    #+#             */
/*   Updated: 2022/09/22 18:02:45 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (str[i])
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i--;
	}
	if (c == '\0')
		return ((char *)&str[i]);
	return (0);
}

//La función strrchr localiza la última 
//instancia de c (convertido a char) en la 
//cadena a la cual señala s. El carácter nulo 
//de terminación se considera como parte 
//de la cadena. La función strrchr devuelve 
//un apuntador al carácter, o un apuntador 
//nulo si c no está incluído en la cadena.