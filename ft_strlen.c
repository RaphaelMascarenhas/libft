/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfreitas <rfreitas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:34:30 by rfreitas          #+#    #+#             */
/*   Updated: 2024/04/20 16:07:05 by rfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*int main()
{
	const char *string = "Hello, world!";
	size_t lenght;

	lenght = ft_strlen(string);

	printf("O tamanho da string '%s' e: %zu\n", string, lenght);
	return (0);
}*/
