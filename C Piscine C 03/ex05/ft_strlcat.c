/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesuserr <jesuserr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:59:45 by jesuserr          #+#    #+#             */
/*   Updated: 2022/12/08 15:37:35 by jesuserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str [i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_dest;
	unsigned int	len_src;

	len_dest = ft_strlen (dest);
	len_src = ft_strlen (src);
	i = 0;
	j = len_dest;
	if (size == 0 || size <= len_dest)
		return (len_src + size);
	while (src [i] != '\0' && i < size - len_dest - 1)
	{
		dest [j] = src [i];
		i++;
		j++;
	}
	dest [j] = '\0';
	return (len_dest + len_src);
}
