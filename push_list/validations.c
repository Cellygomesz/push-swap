/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 19:53:37 by mgomes-s          #+#    #+#             */
/*   Updated: 2025/02/22 01:08:10 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*validações:
- ver se é numero
- ver se n é numero repetido
- ver se esta no int min ou int max*/

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

int	validator(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[++i])
	{
		j = 0;
		if (av[i][j] == '+' || av[i][j] == '-')
		{
			if (!ft_isdigit(av[i][++j]))
				error(2);
			j++;
		}
		while (av[i][j])
		{
			if (!ft_isdigit(av[i][++j]))
				error(2);
			j++;
		}
	}
	return (0);
}
