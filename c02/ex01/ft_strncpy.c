/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 16:07:19 by alba              #+#    #+#             */
/*   Updated: 2025/11/02 16:48:10 by alba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char	*a;

	i = 0;
	a = &dest[i];
	while (i < n && src[i] != '\n')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\n';
	}
	return (a);
}
/*
#include <unistd.h>

int	main(void)
{
	char	dest[10];
	char	*src = "Me gusta la cocacola";
	int	n = 10;
	char	*result;

	result = ft_strncpy(dest, src, n);
	write(1, result, 10);
	write(1, "\n", 1);
	write(1, dest, 10);
}*/
