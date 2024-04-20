/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfreitas <rfreitas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:00:54 by rfreitas          #+#    #+#             */
/*   Updated: 2024/04/20 15:56:05 by rfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = s;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
}
/*
int main()
{
	char    str[20] = "Hello";
	size_t n = 5;

	ft_bzero(str, n);

	printf("Depois %s\n", str);
	return (0);
}*/