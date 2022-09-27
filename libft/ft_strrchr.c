/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:22:35 by migiorda          #+#    #+#             */
/*   Updated: 2022/09/27 12:47:53 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i--;
	}
	if (c == '\0')
		return ((char *)str);
	return (0);
}

//La función strrchr localiza la última 
//instancia de c (convertido a char) en la 
//cadena a la cual señala s. El carácter nulo 
//de terminación se considera como parte 
//de la cadena. La función strrchr devuelve 
//un apuntador al carácter, o un apuntador 
//nulo si c no está incluído en la cadena.