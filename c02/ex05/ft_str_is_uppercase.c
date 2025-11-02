/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 18:02:49 by alba              #+#    #+#             */
/*   Updated: 2025/11/02 18:12:03 by alba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while(65 <= str[i] && str[i] <= 90)
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
	char	*str = "ABCDEFGHI";
	int	a;

	a = ft_str_is_uppercase(str);
	printf("%d", a);
	return (0);
}*/
