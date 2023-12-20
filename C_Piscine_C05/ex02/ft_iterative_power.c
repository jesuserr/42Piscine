/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesuserr <jesuserr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:28:24 by jesuserr          #+#    #+#             */
/*   Updated: 2022/12/12 16:03:03 by jesuserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	copy;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	copy = nb;
	while (power > 1)
	{
		nb = nb * copy;
		power--;
	}
	return (nb);
}
