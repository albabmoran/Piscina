/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 18:15:45 by alba              #+#    #+#             */
/*   Updated: 2025/11/02 18:24:21 by alba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while(32 <= str[i] && str[i] <= 126)
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
	char	*str = "sdas(sdla^df<d";
	int	a;

	a = ft_str_is_printable(str);
	printf("%d", a);
	return (0);
}*/
