/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:46:06 by alba              #+#    #+#             */
/*   Updated: 2025/11/02 18:01:24 by alba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while(97 <= str[i] && str[i] <= 122)
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
	char	*str = "akdheofjvu";
	int	a;

	a = ft_str_is_lowercase(str);
	printf("%d", a);
	return (0);
}*/
