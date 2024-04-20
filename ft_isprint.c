/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfreitas <rfreitas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:55:18 by rfreitas          #+#    #+#             */
/*   Updated: 2024/04/20 16:00:03 by rfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*int main()
{
	char character;

	printf("Digite um numero ou letra: ");
	scanf("%c", &character);

	if(ft_isprint(character))
	{
		printf("O numero '%c' e printble\n", character);
	} else {
		printf("O numero '%c' nao e printble\n", character);
	}
	return(0);
}*/