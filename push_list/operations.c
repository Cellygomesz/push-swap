/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 15:56:38 by mgomes-s          #+#    #+#             */
/*   Updated: 2025/02/21 16:47:04 by mgomes-s         ###   ########.fr       */
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

// ra (rotate a): Desloca todos os elementos da pilha a para cima em 1.
// O primeiro elemento se torna o último.

void	rotate(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*tail;

	if (stack_size(*stack) < 2)
		return ;
	temp = (*stack)->next;
	tail = stack_last(*stack);
	tail->next = (*stack);
	(*stack)->next = NULL;
	*stack = temp;
}

// rra (reverse rotate a): Desloca para baixo todos os elementos da pilha a em 1.
// O último elemento se torna o primeiro.

void	reverse_rotate(t_stack **stack)
{
	t_stack	*last;
	t_stack	*before_last;

	if (stack_size(*stack) < 2)
		return ;
	before_last = stack_before_last(*stack);
	last = stack_last(*stack);
	last->next = (*stack);
	before_last->next = NULL;
	(*stack) = last;
}

// (push a): Pegue o primeiro elemento no topo de b e coloque-o no topo de a.
// Não faça nada se b estiver vazio.

void	push(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;

	if (!(*stack_b))
		return ;
	temp = (*stack_b)->next;
	(*stack_b)->next = (*stack_a);
	(*stack_a) = (*stack_b);
	(*stack_b) = temp;
}
