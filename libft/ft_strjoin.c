/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:31:24 by migiorda          #+#    #+#             */
/*   Updated: 2022/09/23 17:03:29 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	lenstr1;
	char	lenstr2;
	char	*strjoin;
	int		i;
	int		j;

	lenstr1 = ft_strlen((char *)str1);
	lenstr2 = ft_strlen((char *)str2);
	strjoin = (char *)malloc(sizeof(char) * (lenstr1 + lenstr2 + 1));
	if (!str1 || !str2 || !strjoin)
		return (NULL);
	i = 0;
	while (str1[i])
	{
		strjoin[i] = str1[i];
		i++;
	}
	j = 0;
	while (str2[j])
	{
		strjoin[i++] = str2[j++];
	}
	strjoin[i] = '\0';
	return (strjoin);
}
