/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 13:40:06 by alba              #+#    #+#             */
/*   Updated: 2025/11/01 13:51:07 by alba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "soy experta";

	ft_strlen(str);
	printf("%d", ft_strlen(str));
	return (0);
}*/
