/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpena <gpena@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 13:00:59 by gpena             #+#    #+#             */
/*   Updated: 2025/06/16 17:48:20 by gpena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/*int main(void)
{
	printf("%i\n", ft_str_is_numeric("123456789"));
	printf("%i\n", ft_str_is_numeric("ABC"));
	printf("%i\n", ft_str_is_numeric(""));
	return(0);
}*/