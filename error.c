/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 09:40:28 by mgomes-s          #+#    #+#             */
/*   Updated: 2025/02/07 09:47:28 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	error(int num)
{
	if (num == 1)
		write(2, "error -> no argument passed.\n", 29);
	if (num == 2)
		write(2, "error ->\n", 9);
	if (num == 3)
		write(2, "error ->\n", 9);
	if (num == 4)
		write(2, "error ->\n", 9);
}
