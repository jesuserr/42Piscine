/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesuserr <jesuserr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:33:55 by jesuserr          #+#    #+#             */
/*   Updated: 2022/12/08 10:50:41 by jesuserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (to_find [0] == '\0')
		return (str);
	while (str [i] != '\0')
	{
		while (str [i + j] == to_find [j] && str [i + j] != '\0')
			j++;
		if (to_find [j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
