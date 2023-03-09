/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesuserr <jesuserr@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:28:14 by jesuserr          #+#    #+#             */
/*   Updated: 2022/12/06 12:05:25 by jesuserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		put_caps;
	int		i;

	ft_strlowcase(str);
	i = 0;
	put_caps = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (put_caps == 1)
				str[i] = str[i] - 32;
			put_caps = 0;
		}
		else
		{
			if (str[i] >= '0' && str[i] <= '9')
				put_caps = 0;
			else
				put_caps = 1;
		}
		i++;
	}
	return (str);
}
