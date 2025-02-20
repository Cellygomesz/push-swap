/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 15:56:38 by mgomes-s          #+#    #+#             */
/*   Updated: 2025/02/20 16:23:04 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// sa (swap a): Troque os 2 primeiros elementos no topo da pilha a.
// Não faça nada se houver apenas um ou nenhum elemento.

// input : 1 2 3
// output: 2 1 3

void	swap(t_stack **stack)
{
	t_stack	*temp_next;

	if (stack_size(*stack) < 2)
		return ;
	temp_next = (*stack)->next;
	(*stack)->next = temp_next->next;
	temp_next->next = *stack;
	*stack = temp_next;
}
