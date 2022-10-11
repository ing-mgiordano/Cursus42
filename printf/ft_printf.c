/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:43:51 by migiorda          #+#    #+#             */
/*   Updated: 2022/10/11 12:23:13 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	ft_check_conv(char s, va_list *args, int *len)
{
	if (s == 's')
		ft_string(va_arg(*args, char *), len);
	else if (s == 'd' || s == 'i')
		ft_number(va_arg(*args, int), len);
	else if (s == 'u')
		ft_unsigned_int(va_arg(*args, unsigned int), len);
	else if (s == 'x')
		ft_hexadecimal(va_arg(*args, unsigned int), len, 'x');
	else if (s == 'X')
		ft_hexadecimal(va_arg(*args, unsigned int), len, 'X');
	else if (s == 'p')
		ft_pointer(va_arg(*args, size_t), len);
	else if (s == 'c')
		ft_putchar_len(va_arg(*args, int), len);
	else if (s == '%')
		ft_putchar_len('%', len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			ft_check_conv(str[i], &args, &len);
			i++;
		}
		else
		{
			ft_putchar_len((char)str[i], &len);
			i++;
		}
	}
	va_end(args);
	return (len);
}

//va_start va_end va_arg
//https://learn.microsoft.com/es-es/cpp/c-runtime-library/reference/
//va-arg-va-copy-va-end-va-start?view=msvc-170
//
//La función printf transporta datos desde la memoria a la pantalla, 
//a diferencia de scanf, que envía datos desde el teclado para 
//almacenarlos en la memoria. La función printf devuelve el número 
//de caracteres escritos. Si devuelve un valor negativo indica que 
//se ha producido un error.