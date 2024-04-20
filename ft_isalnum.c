/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfreitas <rfreitas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:23:59 by rfreitas          #+#    #+#             */
/*   Updated: 2024/04/20 15:57:03 by rfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}

/*int main()
{
	char character;

	printf("Digite um caractere: ");
	scanf("%c", &character);

	if(ft_isalnum(character))
	{
		printf("O digito '%c' e um valor da tabela.\n", character);
	} else {
		printf("O digito '%c' nao e um valor da tabela.\n", character);
	}
	return (0);
}*/