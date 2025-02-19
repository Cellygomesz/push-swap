/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:54:55 by mgomes-s          #+#    #+#             */
/*   Updated: 2025/02/19 12:42:43 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
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
*/
/*
void	check_order(void)
{
	//funcao que vai verificar se os numeros estao em ordem


}*/


void	check_num(char **av)
{
	//funcao que vai verificar se só colocaram numeros
	int	i;

	i = 0;
	while (av[i] != '\0' && ft_isdigit(av[i]))
		i++;
	if (av[i] != '\0' && !ft_isdigit(av[i]))
		ft_error(2);
}
