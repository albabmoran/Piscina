/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 14:08:24 by alba              #+#    #+#             */
/*   Updated: 2025/11/02 16:06:31 by alba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	char	*a;

	i = 0;
	a = &dest[i];
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (a);
}
/*
#include <unistd.h>

int	main(void)
{
	char	dest[13];
	char	*src = "hola que tal";
	char	*result;

	result = ft_strcpy(dest, src);
	write(1, result, 13);
	write(1, "\n", 1);
	write(1, dest, 13);
	return (0);
}*/
