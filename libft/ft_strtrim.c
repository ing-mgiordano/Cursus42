/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:34:04 by migiorda          #+#    #+#             */
/*   Updated: 2022/09/27 18:05:20 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, const char *set)
{
	size_t	i;
	size_t	j;
	char	*trim;

	trim = 0;
	if (str != 0 && set != 0)
	{
		i = 0;
		j = ft_strlen(str);
		while (str[i] && ft_strchr(set, str[i]))
			i++;
		while (str[j - 1] && ft_strchr(set, str[j - 1]) && j > i)
			j--;
		trim = (char *)malloc(sizeof(char) * (j - i + 1));
		if (!trim)
			return (NULL);
		if (trim)
			ft_strlcpy(trim, &str[i], j - i + 1);
	}
	return (trim);
}

//errores de memoria
