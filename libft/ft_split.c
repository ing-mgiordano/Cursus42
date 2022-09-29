/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:47:58 by migiorda          #+#    #+#             */
/*   Updated: 2022/09/29 19:11:49 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numstring(const char *s, char c)
{
	size_t	i;
	size_t	boolean;

	i = 0;
	boolean = 0;
	if (!s)
		return (0);
	while (*s != '\0')
	{
		if (*s == c)
			boolean = 0;
		else if (boolean == 0)
		{
			boolean = 1;
			i++;
		}
		s++;
	}
	return (i);
}

static size_t	ft_numchar(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static char	**ft_free_strs(const char **strs, size_t len_strs)
{
	while (len_strs)
	{
		free((void *)strs[len_strs]);
		strs--;
	}
	free(strs);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	size_t	len;
	size_t	i;
	size_t	slen;
	char	**strs;

	i = 0;
	slen = 0;
	len = ft_numstring(s, c);
	strs = (char **)malloc(sizeof(char *) * (len + 1));
	if (!strs)
		return (NULL);
	while (i < len)
	{
		while (*s == c)
			s++;
		slen = ft_numchar(s, c);
		strs[i] = (char *)malloc(sizeof(char) * (slen + 1));
		if (!strs[i])
			return (ft_free_strs((const char **)strs, len));
		ft_strlcpy(strs[i], s, slen + 1);
		s = (ft_strchr(s, (int)c));
			i++;
	}
	strs[i] = 0;
	return (strs);
}
