/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 09:48:42 by mgomes-s          #+#    #+#             */
/*   Updated: 2025/01/23 16:20:55 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ---- erros ----
// maior ou menor int
// se é um caracter nao numerico
// fazer verificacao se os numeros nao sao repetidos (sem malloc)
// verificar se a string eh vazia

#include "push_swap.h"

long	ft_atol(const char *nptr)
{
	long	i;
	long	neg;
	long	temp;

	i = 0;
	neg = 1;
	temp = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			neg *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		temp = (nptr[i] - '0') + (temp * 10);
		i++;
	}
	temp = temp * neg;
	return (temp);
}

void	error(void)
{
	write(1, "error\n", 6);
}

int main(int ac, char **av)
{
	if (av[0] && !av[1])
		error();
	(void)ac;
	(void)av;
	write(1, "teste\n", 6);
	return (0);
}
