/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 13:53:07 by alba              #+#    #+#             */
/*   Updated: 2025/11/01 17:59:18 by alba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	size = 4;
	int	tab[4] = {1, 2, 3, 4};
	int	i;

	i = 0;
	while (i < size)
        {
                printf("%d", tab[i]);
                i++;
        }
	i = 0;
	printf("\n");
	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}*/
