/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaolivei <yaolivei@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 21:40:03 by yaolivei          #+#    #+#             */
/*   Updated: 2023/07/27 00:04:08 by yaolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	if (str[0] >= 'a' && str [0] <= 'z')
	{
		str[0] = str[0] -32;
	}
	i = 1;
	j = 0;
	while (str[i] != '\0')
	{
		if (!((str [j] >= 'a' && str[j] <= 'z')
				|| (str[j] >= 'A' && str[j] <= 'Z')
				|| (str[j] >= '0' && str[j] <= '9')))
		{
			if ((str[i] >= 'a' && str [i] <= 'z'))
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
		j++;
	}
	return (str);
}
