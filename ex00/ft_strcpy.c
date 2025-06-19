/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpena <gpena@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:07:57 by gpena             #+#    #+#             */
/*   Updated: 2025/06/17 10:53:25 by gpena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main(void)
{
	char origem[40] = "o rato roeu a roupa do rei de Roma";
	char destino[40];

	ft_strcpy(destino, origem);
	printf("origem: %s\n", origem);
	printf("destino: %s\n", destino);
	return(0);
}*/