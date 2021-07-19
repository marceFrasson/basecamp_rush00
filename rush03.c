/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 00:05:40 by mfrasson          #+#    #+#             */
/*   Updated: 2020/11/22 16:02:01 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_count_y;
int g_count_x;

void	ft_putchar(char c);

int		first_line(int g_count_x, int x)
{
	if (g_count_x == 0)
	{
		ft_putchar('A');
	}
	else if (g_count_x == x - 1)
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar('B');
	}
	return (0);
}

int		last_line(int g_count_x, int x)
{
	if (g_count_x == 0)
	{
		ft_putchar('A');
	}
	else if (g_count_x == x - 1)
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar('B');
	}
	return (0);
}

int		middle_lines(int g_count_x, int x)
{
	if (g_count_x == 0 || g_count_x == x - 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
	return (0);
}

void	rush(int x, int y)
{	
	while (g_count_y < y && y > 0 && x > 0)
	{
		g_count_x = 0;
		while (g_count_x < x)
		{
			if (g_count_y == 0)
			{
				first_line(g_count_x, x);
			}
			else if (g_count_y == y - 1)
			{
				last_line(g_count_x, x);
			}
			else
			{
				middle_lines(g_count_x, x);
			}
			g_count_x++;
		}
		g_count_y++;
		ft_putchar('\n');
	}
}
