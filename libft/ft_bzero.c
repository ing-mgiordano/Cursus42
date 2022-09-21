/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migiorda <migiorda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:24:55 by migiorda          #+#    #+#             */
/*   Updated: 2022/09/21 17:39:55 by migiorda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, '\0', n);
}

//La función bzero se puede utilizar para borrar el área de memoria dada con 
//cero bytes ( \0 ). Toma dos argumentos, la dirección inicial de la región 
//de memoria y el número de bytes que deben ponerse a cero.