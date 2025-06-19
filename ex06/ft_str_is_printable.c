/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpena <gpena@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 13:54:10 by gpena             #+#    #+#             */
/*   Updated: 2025/06/16 17:48:28 by gpena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

/*int main(void)
{
	printf("%i\n", ft_str_is_printable("!@#$"));
	printf("%i\n", ft_str_is_printable("'\n'"));
	printf("%i\n", ft_str_is_printable(""));
	return(0);
}*/