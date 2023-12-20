/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesuserr <jesuserr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 09:26:16 by jesuserr          #+#    #+#             */
/*   Updated: 2022/11/30 09:42:21 by jesuserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	cont_1;
	int	cont_2;
	int	copia;

	cont_1 = 0;
	cont_2 = 0;
	while (cont_1 < (size - 1))
	{
		cont_2 = 0;
		while (cont_2 < (size -1))
		{
			if (tab[cont_2] > tab[cont_2 + 1])
			{
			copia = tab[cont_2];
			tab[cont_2] = tab[cont_2 + 1];
			tab[cont_2 + 1] = copia;
			}
		cont_2++;
		}
		cont_1++;
	}
}
