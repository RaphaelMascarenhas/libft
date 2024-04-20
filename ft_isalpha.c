/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfreitas <rfreitas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:04:10 by rfreitas          #+#    #+#             */
/*   Updated: 2024/04/20 15:57:44 by rfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
int main() {
	char character;

	printf("Digite um caractere: ");
	scanf("%c", &character);

	if (ft_isalpha(character)) 
	{
		printf("O caractere '%c' é uma letra.\n", character);
	} else {
		printf("O caractere '%c' não é uma letra.\n", character);
	}

	return 0;
}*/
