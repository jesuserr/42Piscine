/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesuserr <jesuserr@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:02:02 by jesuserr          #+#    #+#             */
/*   Updated: 2022/12/02 09:13:37 by jesuserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src [i] != '\0')
	{
		dest [i] = src [i];
		i++;
	}
	dest [i] = '\0';
	return (dest);
}
