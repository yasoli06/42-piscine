/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaolivei <yaolivei@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 21:05:49 by yaolivei          #+#    #+#             */
/*   Updated: 2023/07/27 22:06:12 by yaolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc < 2)
	{
		write (1, "\n", 1);
	}
	else
	{
		while (argv[1][i])
		{
			write (1, &argv[1][i++], 1);
		}
		write (1, "\n", 1);
	}
	return (0);
}
