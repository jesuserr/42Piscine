/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesuserr <jesuserr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:00:07 by jesuserr          #+#    #+#             */
/*   Updated: 2022/11/29 18:02:53 by jesuserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	cont;
	int	copia;

	cont = 0;
	while (cont < (size / 2))
	{
		copia = tab[cont];
		tab[cont] = tab[size - 1 - cont];
		tab[size - 1 - cont] = copia;
		cont++;
	}
}
