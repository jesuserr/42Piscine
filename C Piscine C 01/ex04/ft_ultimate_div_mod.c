/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesuserr <jesuserr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:07:04 by jesuserr          #+#    #+#             */
/*   Updated: 2022/11/29 16:09:49 by jesuserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	copia_a;
	int	copia_b;

	copia_a = *a;
	copia_b = *b;
	*a = copia_a / copia_b;
	*b = copia_a % copia_b;
}
