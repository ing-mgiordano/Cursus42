/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:34:04 by migiorda          #+#    #+#             */
/*   Updated: 2022/09/28 10:46:44 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, const char *set)
{
	size_t	i;
	size_t	j;
	char	*trim;

	trim = 0;
	if (!str || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(str);
	while (str[i] && ft_strchr(set, str[i]))
		i++;
	while (j && ft_strchr(set, str[j - 1]))
		j--;
	trim = ft_substr(str, i, (j - i));
	if (trim == NULL)
		return (NULL);
	return (trim);
}
