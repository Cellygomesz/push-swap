/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 09:48:42 by mgomes-s          #+#    #+#             */
/*   Updated: 2025/02/18 16:10:56 by mgomes-s         ###   ########.fr       */
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

int main(int ac, char **av)
{
	long		*num;
	int		i;
	int		j;
	int		l;

	i = 0;
	j = 0;
	l = 0;
	if (ac == 1)
		ft_error(1);
	while (av[i++]);
	num = (long *)malloc(sizeof(long) * (i - 1));
	if (ac == 2)
	{
		i = 0;
		av = ft_split(av[1], ' ');
	}
	else
		i = 1;
	while (av[i])
	{
		while (av[i][l] != '\0')
		{
			if (!(av[i][l] >= '0' && av[i][l] <= '9'))
				ft_error(2);
			l++;
		}
		l = 0;
		num[j] = ft_atol(av[i]);
		printf("%ld \n", num[j]);
		i++;
		j++;
	}
	return (0);
}
