/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfreitas <rfreitas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:00:47 by rfreitas          #+#    #+#             */
/*   Updated: 2024/04/20 16:05:36 by rfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*string;
	size_t	i;

	string = (char *)s;
	i = 0;
	while (i < n)
	{
		string[i] = c;
		i++;
	}
	return (s);
}
/*
int main() 
{
	char str[20];
	char c = 'u';
	size_t length = 12;

   
	ft_memset(str, c, length);

   
	printf("String preenchida: %s\n", str);

	return 0;
}*/