/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:31:40 by alba              #+#    #+#             */
/*   Updated: 2025/11/02 17:41:57 by alba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while('0' <= str[i] && str[i] <= '9')
	{
		i++;
	}
	if(str[i] == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str = "38121208";
	int	a;

	a = ft_str_is_numeric(str);
	printf("%d", a);
	return (0);
}*/
