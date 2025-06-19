/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpena <gpena@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:15:34 by gpena             #+#    #+#             */
/*   Updated: 2025/06/17 15:34:54 by gpena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int main(void)
{
	char origem[] = "Australopithecus";
	char destino[40];
	int n = 10;
	ft_strncpy(destino, origem, n);
	printf("valor de origem é: %s\n", origem);
	printf("valor de destino é: %s\n", destino);
	return(0);
}*/