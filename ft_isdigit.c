/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfreitas <rfreitas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:45:44 by rfreitas          #+#    #+#             */
/*   Updated: 2024/04/20 15:59:19 by rfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/*int main()
{
	char character;

	printf("Digite um caractere: ");
	scanf("%c", &character);

	if(ft_isdigit(character))
	{
		printf("O caractere '%c' e um digito\n", character);
	} else {
		printf("O caractere '%c' nao e um digito\n", character);
	}

return (0);
}*/
