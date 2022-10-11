/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:31:28 by migiorda          #+#    #+#             */
/*   Updated: 2022/10/11 13:29:33 by migiorda         ###   ########.fr       */
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
		return ;
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
	char	str[25];
	int		i;
	char	*base;

	i = 0;
	base = "0123456789abcdef";
	write(1, "0x", 2);
	(*len) += 2;
	if (pointer == 0)
	{
		ft_putchar_len('0', len);
		return ;
	}
	while (pointer != 0)
	{
		str[i] = base[pointer % 16];
		pointer = pointer / 16;
		i++;
	}
	while (i--)
		ft_putchar_len(str[i], len);
}

//hexadecimal - mayuscula o minuscula
void	ft_hexadecimal(unsigned int x, int *len, char up_lo)
{
	char	str[25];
	int		i;
	char	*base;

	i = 0;
	if (up_lo == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (x == 0)
	{
		ft_putchar_len('0', len);
		return ;
	}
	while (x != 0)
	{
		str[i] = base[x % 16];
		x /= 16;
		i++;
	}
	while (i--)
		ft_putchar_len(str[i], len);
}
