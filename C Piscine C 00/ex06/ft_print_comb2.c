/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesuserr <jesuserr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 12:46:35 by jesuserr          #+#    #+#             */
/*   Updated: 2022/11/26 15:15:00 by jesuserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putchar_2(char d)
{
	ft_putchar(48 + d / 10);
	ft_putchar(48 + d % 10);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	int		last_comma;

	a = 0;
	last_comma = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a == 98 && b == 99)
				last_comma = 1;
			ft_putchar_2(a);
			ft_putchar(' ');
			ft_putchar_2(b);
			if (last_comma == 0)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}
