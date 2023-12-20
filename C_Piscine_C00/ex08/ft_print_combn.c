/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesuserr <jesuserr@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:55:16 by jesuserr          #+#    #+#             */
/*   Updated: 2022/11/28 12:21:23 by jesuserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_numbers(char actual [], int digits, int last)
{
	int	cont;

	cont = 0;
	if (actual[0] == last)
	{
		while (cont < digits)
			ft_putchar(actual[cont++]);
		return ;
	}
	while (cont < digits)
		ft_putchar (actual[cont++]);
	write (1, ", ", 2);
}

void	ft_print_combn(int digits)
{
	char	actual[10];
	char	maximo[10];
	int		cont;
	int		copy;

	cont = 0;
	while (cont < digits)
	{
		actual[cont] = cont + 48;
		maximo[cont] = (10 - digits) + cont + 48;
		cont++;
	}
	ft_print_numbers(actual, digits, maximo[0]);
	while (actual[0] != maximo[0])
	{
		cont = digits - 1;
		while (actual[cont] == maximo[cont])
			--cont;
		actual[cont]++;
		copy = actual[cont];
		while (cont < (digits - 1))
			actual[++cont] = ++copy;
		ft_print_numbers (actual, digits, maximo[0]);
	}
}
