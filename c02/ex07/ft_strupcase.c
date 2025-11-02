/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 18:27:19 by alba              #+#    #+#             */
/*   Updated: 2025/11/02 19:14:26 by alba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if('a' <= str[i] && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
#include <unistd.h>

int	main(void)
{
	char	str[] = "abc ef- \n?ghi";
	char	*result;
	
	result = ft_strupcase(str);
	write(1, result, 15);
	return (0);
}*/
