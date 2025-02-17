/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 09:48:42 by mgomes-s          #+#    #+#             */
/*   Updated: 2025/02/17 14:57:20 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ---- erros ----
// maior ou menor lonh
// se é um caracter nao numerico
// fazer verificacao se os numeros nao sao repetidos (sem malloc)
// verificar se a string eh vazia

#include "push_swap.h"

int main(int ac, char **av)
{
	if (av[0] && !av[1])
		error(1);
	(void)ac;

	write(1, "teste\n", 6);
	return (0);
}
