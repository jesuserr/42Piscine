/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesuserr <jesuserr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:38:12 by jesuserr          #+#    #+#             */
/*   Updated: 2022/12/12 11:17:08 by jesuserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str [i] == ' ' || (str [i] >= '\t' && str [i] <= '\r'))
		i++;
	while (str [i] == '-' || str [i] == '+')
	{
		if (str [i] == '-')
			sign = sign * (-1);
		i++;
	}
	while ((str [i] >= '0' && str [i] <= '9') && str [i] != '\0')
	{
		result = result * 10;
		result = result + str [i] - 48;
		i++;
	}
	return (result * sign);
}
