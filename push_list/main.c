/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:37:00 by mgomes-s          #+#    #+#             */
/*   Updated: 2025/02/21 16:44:38 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	valid_number(char *str)
// {
// 	int	i;

// 	i = 0;
// 	if (!str[i])
// 		return (0);
// 	if (str[i] == '-' || str[i] == '+')
// 		i++;
// 	while (str[i])
// 	{
// 		if (str[i] < '0' && str[i] > '9')
// 			i
// 	}
// }

int main(int ac, char **av)
{
	int i = 1;
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	while (i < ac)
	{
		if(i < 3)
			stack_add_back(&stack_a, stack_new(ft_atoi(av[i])));
		else
			stack_add_back(&stack_b, stack_new(ft_atoi(av[i])));
		i++;
	}
	i = 1;
	push(&stack_a, &stack_b);
	push(&stack_a, &stack_b);
	while (stack_a)
	{
		printf("%d\n", stack_a->value);
		stack_a = stack_a->next;
		i++;
	}
	return (0);
}
