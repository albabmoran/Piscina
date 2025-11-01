/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 12:40:51 by alba              #+#    #+#             */
/*   Updated: 2025/11/01 13:03:26 by alba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;
	int	result;
	int	rest;

	a = 6;
	b = 2;
	div = &result;
	mod = &rest;
	ft_div_mod(a, b, div, mod);
	printf("%d\n%d", result, rest);
	return (0);
}*/
