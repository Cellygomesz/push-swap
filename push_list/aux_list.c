/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:41:20 by mgomes-s          #+#    #+#             */
/*   Updated: 2025/02/20 15:38:20 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// cria um novo nó
t_stack	*stack_new(int value)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->value = value;
	new->position = 0;
	new->next = NULL;
	return (new);
}

// adiciona um elemento no final
void	stack_add_back(t_stack **stack, t_stack *new)
{
	t_stack	*temp;

	if (!stack || !new)
		return;
	if (*stack == NULL)
		*stack = new;
	temp = *stack;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
}

// pega o ultimo no da lista
t_stack	*stack_last(t_stack *stack)
{
	while (stack->next != NULL)
		stack = stack->next;
	return (stack);
}

// mostra o tamanho da lista
int	stack_size(t_stack *stack)
{
	int	size;

	size = 1;
	if (!stack)
		return (0);
	while(stack->next != NULL)
	{
		stack = stack->next;
		size++;
	}
	return (size);
}
