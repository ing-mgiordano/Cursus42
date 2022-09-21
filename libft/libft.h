/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:11:08 by migiorda          #+#    #+#             */
/*   Updated: 2022/09/21 19:08:14 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBF_H

# include <unistd.h>
# include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

int		ft_atoi(const char *str);

int		ft_strncmp(const char *str1, const char *str2, size_t n);

size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);

char	*ft_strchr(const char *str, int c);

void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *str, size_t n);

#endif