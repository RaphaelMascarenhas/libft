/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfreitas <rfreitas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:34:16 by rfreitas          #+#    #+#             */
/*   Updated: 2024/04/20 15:58:34 by rfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int main()
{
	int character;

	printf("Escreva um digito: ");
	scanf("%c", &character);

	if(ft_isascii(character))
	{
		printf("O digito '%c' faz parte da ASCII\n", character);
	} else {
		printf("O digito '%c' nao faz parte da ASCII\n", character);
	}
return(0);
}*/