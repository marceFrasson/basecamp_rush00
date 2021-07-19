/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguandal <aguandal@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 18:34:22 by aguandal          #+#    #+#             */
/*   Updated: 2020/11/23 01:09:36 by aguandal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** declaring global variables
*/

int g_count_y;
int g_count_x;

/*
** calling function
*/

void	ft_putchar(char c);

/*
** writing first line function
** prints first character, then last, then middle ones
*/

void	first_line(int g_count_x, int x)
{
	if (g_count_x == 0)
	{
		ft_putchar('/');
	}
	else if (g_count_x == x - 1)
	{
		ft_putchar('\\');
	}
	else
	{
		ft_putchar('*');
	}
}

/*
** writing last line
** prints first character, then last, then middle ones
*/

void	last_line(int g_count_x, int x)
{
	if (g_count_x == 0)
	{
		ft_putchar('\\');
	}
	else if (g_count_x == x - 1)
	{
		ft_putchar('/');
	}
	else
	{
		ft_putchar('*');
	}
}

/*
** writing middle lines
** prints first and last character then middle ones
*/

void	middle_lines(int g_count_x, int x)
{
	if (g_count_x == 0 || g_count_x == x - 1)
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

/*
** writing rush function
** checks if lines and columns are greater then zero
** checks if first line, then last line then middle ones
*/

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
