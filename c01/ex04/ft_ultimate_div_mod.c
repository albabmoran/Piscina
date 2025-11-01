/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 13:04:44 by alba              #+#    #+#             */
/*   Updated: 2025/11/01 13:12:15 by alba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	n;
	int	x;

	n = *a;
	x = *b;
	*a = n / x;
	*b = n % x;
}
/*
#include <stdio.h>

int	main(void)
{
	int	n;
	int	x;
	int	*a;
	int	*b;

	n = 6;
	x = 2;
	a = &n;
	b = &x;
	ft_ultimate_div_mod(a, b);
	printf("%d\n%d", *a, *b);
	return (0);
}*/
