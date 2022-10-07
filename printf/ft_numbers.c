/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:31:28 by migiorda          #+#    #+#             */
/*   Updated: 2022/10/07 15:41:05 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//putnbr
void	ft_number(int num, int *len)
{
	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*len) += 11;
	}
	if (num < 0)
	{
		ft_putchar_len('-', len);
		ft_number(num * -1, len);
	}
	else
	{
		if (num > 9)
			ft_number(num / 10, len);
		ft_putchar_len(num % 10 + '0', len);
	}
}

//unsigned int
void	ft_unsigned_int(unsigned int num, int *len)
{
	if (num >= 10)
		ft_unsigned_int(num / 10, len);
	ft_putchar_len(num % 10 + '0', len);
}

//pointer
void	ft_pointer(size_t pointer, int *len)
{

}

//hexadeciaml - mayuscula o minuscula
void	ft_hexadeecimal(unsigned int x, int *len, char case)
{

}
