/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonisa <antonisa@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 19:56:23 by antonisa          #+#    #+#             */
/*   Updated: 2023/07/08 20:55:15 by agil-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_line(char a, char b, int x)
{
	int	contadorx;

	contadorx = 1;
	while (contadorx <= x)
	{
		if ((contadorx == 1) || (contadorx == x))
		{
			ft_putchar(a);
		}
		else
		{
			ft_putchar(b);
		}
		contadorx = contadorx + 1;
	}
}

void	rush(int x, int y)
{
	int	contadory;

	contadory = 1;
	while (contadory <= y)
	{
		if ((contadory > 1) & (contadory < y))
		{
			ft_line('|', ' ', x);
		}
		else
		{
			ft_line('o', '-', x);
		}
		contadory = contadory + 1;
		ft_putchar('\n');
	}
}
