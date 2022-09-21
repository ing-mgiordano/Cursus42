/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:46:09 by migiorda          #+#    #+#             */
/*   Updated: 2022/09/20 16:50:39 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* unsigned int	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
} */
//cambiar los unsigned int  size_t
unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	value;

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

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(void)
{   
    char src[] = "123";
    char dest[] = "Hola";

	
   printf( "%d\n", ft_strlcat(dest, src, 2));
   printf( "%s\n", dest);
	return (0);
}
