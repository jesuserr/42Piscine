/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesuserr <jesuserr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:38:18 by jesuserr          #+#    #+#             */
/*   Updated: 2022/11/26 18:45:21 by jesuserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putline(char edge, char middle, int x)
{
	int		counter;
	char	symbol;

	counter = 0;
	while (counter < x)
	{
		if (counter == 0 || counter == x - 1)
		{
			symbol = edge;
		}
		else
		{
			symbol = middle;
		}
		ft_putchar(symbol);
		counter ++;
	}
}

void	rush(int x, int y)
{
	int	counter;

	if (x > 0 && y > 0)
	{
		counter = 0;
		while (counter < y)
		{
			if (counter == 0 || counter == y - 1)
			{		
				ft_putline('o', '-', x);
			}
			else
			{
				ft_putline('|', ' ', x);
			}
			write(1, "\n ", 1);
			counter ++;
		}
	}
}
