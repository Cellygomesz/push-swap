/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 09:48:42 by mgomes-s          #+#    #+#             */
/*   Updated: 2025/02/19 11:29:32 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	is_valid_number(char *str)
{
	int i;

	i = 0;
	if (str[i] == '-' || str[i] == '+') // Permitir sinal no início
		i++;
	if (str[i] == '\0') // Apenas um sinal sem número é inválido
		return (0);
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

void	ft_free(char **arr)
{
	int	i;

	if (!arr)
		return;
	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}


int main(int ac, char **av)
{
	long	*num;
	int		i;
	int		j;
	int		count;

	if (ac == 1)
		ft_error(1);

	// Se entrada for única string ("1 2 3"), dividir em um novo array
	if (ac == 2)
		av = ft_split(av[1], ' ');

	// Contar quantos números foram passados
	count = 0;
	while (av[count])
		count++;

	// Alocar memória para armazenar os números
	num = (long *)malloc(sizeof(long) * count);
	if (!num)
		ft_error(3);

	// Preencher o array com os números convertidos
	if (ac == 2)
		i = 0;
	else
		i = 1;
	j = 0;
	while (av[i])
	{
		num[j] = ft_atol(av[i]);
		printf("%ld \n", num[j]);
		i++;
		j++;
	}

	// Liberar memória caso tenha usado ft_split
	if (ac == 2)
		ft_free(av);

	return (0);
}
