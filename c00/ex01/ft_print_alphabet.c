/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 22:53:14 by alba              #+#    #+#             */
/*   Updated: 2025/09/26 00:09:54 by alba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	*x;

	x = "abcdefghijklmnopqrstuvwxyz";
	write(1, x, 26);
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
