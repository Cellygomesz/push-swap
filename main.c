/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 09:48:42 by mgomes-s          #+#    #+#             */
/*   Updated: 2025/02/17 12:00:29 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ---- erros ----
// maior ou menor lonh
// se é um caracter nao numerico
// fazer verificacao se os numeros nao sao repetidos (sem malloc)
// verificar se a string eh vazia

#include "push_swap.h"

/*
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
}*/

/*
void	check_order(void)
{
	//funcao que vai verificar se os numeros estao em ordem

}*/

// input: 1 2 45 567 3 45 -3 6 9
void	check_duplicate(char **av)
{
	//funcao que vai verificar se os numeros sao duplicados
	int	i;
	int	j;
	int	neg;

	i = 0;
	j = 0;
	while (av[i][j])
	{
		while (av[i][j])
		{
			neg = 1;
			if (av[i][j] == '-')
				neg *= -1;
			if (av[i][j] >= '1' && av[i][j] <= '9')
			j++;
		}
		i++;
	}

}
/*
void	check_num(void)
{
	//funcao que vai verificar se só colocaram numeros
}*/

int main(int ac, char **av)
{
	if (av[0] && !av[1])
		error(1);
	(void)ac;

	write(1, "teste\n", 6);
	return (0);
}
