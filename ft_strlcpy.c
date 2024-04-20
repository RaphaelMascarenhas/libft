/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfreitas <rfreitas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 11:55:43 by rfreitas          #+#    #+#             */
/*   Updated: 2024/04/20 15:51:07 by rfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	unsigned int	i;
	const char		*buffer1;
	unsigned int	length;

	i = 0;
	length = 0;
	buffer1 = src;
	if (!src)
		return (0);
	while (buffer1[i] != '\0')
		i++;
	length = i;
	if (dstsize == 0)
		return (length);
	i = 0;
	while (i < length && i < (dstsize - 1))
	{
		dest[i] = buffer1[i];
		i++;
	}
	dest[i] = '\0';
	return (length);
}

/* int main() 
{
	char src[] = "Hello, world!";
	char dest[20]; 
	size_t tamanhoCopia;

	tamanhoCopia = ft_strlcpy(dest, src, sizeof(dest));

	printf("String copiada: %s\n", dest);
	printf("Comprimento da string copiada: %zu\n", tamanhoCopia);

	return (0);
} */