/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:01:50 by alba              #+#    #+#             */
/*   Updated: 2025/11/01 18:45:36 by alba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		while (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	size = 4;
	int	tab[4] = {3, 4, 1, 2};
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	ft_sort_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}*/
