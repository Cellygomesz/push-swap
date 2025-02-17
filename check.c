/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:54:55 by mgomes-s          #+#    #+#             */
/*   Updated: 2025/02/17 15:04:12 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// input: 1 2 45 567 3 45 -3 6 9
void	check_duplicate(char **av)
{
	//funcao que vai verificar se os numeros sao duplicados
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (av[count])
		count++;
	while (count < 0)
	{
		while (av[i][j])
		{
			j++;
		}
		count--z;
	}

}

/*
void	check_order(void)
{
	//funcao que vai verificar se os numeros estao em ordem

}*/

/*
void	check_num(void)
{
	//funcao que vai verificar se só colocaram numeros
}*/
