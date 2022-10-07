/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:23:39 by migiorda          #+#    #+#             */
/*   Updated: 2022/10/07 15:32:45 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// Standard C Libraries

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>

void			ft_putchar_len(char c, int *len);
void			ft_string(char *args, int *len);

void			ft_number(int num, int *len);
void			ft_hexadecimal(unsigned int x, int *len, char case);
void			ft_unsigned_int(unsigned int num, int *len);
void			ft_pointer(size_t pointer, int *len);

int				ft_printf(const char *str, ...);

#endif