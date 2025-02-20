/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:37:00 by mgomes-s          #+#    #+#             */
/*   Updated: 2025/02/20 16:18:46 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	int i = 2;
	t_stack	*stack_a;

	stack_a = stack_new(ft_atoi(av[1]));
	while (i < ac)
	{
		stack_add_back(&stack_a, stack_new(ft_atoi(av[i])));
		i++;
	}
	i = 1;
	swap(&stack_a);
	while (i < ac)
	{
		printf("%d\n", stack_a->value);
		stack_a = stack_a->next;
		i++;
	}
	return (0);
}
