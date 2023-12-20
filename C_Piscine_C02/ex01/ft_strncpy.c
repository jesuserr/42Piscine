/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesuserr <jesuserr@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:09:42 by jesuserr          #+#    #+#             */
/*   Updated: 2022/12/02 09:30:16 by jesuserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				control;
	int				j;

	i = 0;
	j = 0;
	control = 0;
	while (i < n)
	{
		dest [j] = src [j];
		if (src [j] == '\0' && control == 0)
		{
			dest [j] = '\0';
			control = 1;
		}
		if (control == 1)
			dest [j] = '\0';
		j++;
		i++;
	}
	return (dest);
}
