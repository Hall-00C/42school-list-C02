/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpena <gpena@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 13:45:17 by gpena             #+#    #+#             */
/*   Updated: 2025/06/16 17:48:25 by gpena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

/*int main(void)
{
	printf("%i\n", ft_str_is_uppercase("HELLO"));
	printf("%i\n", ft_str_is_uppercase("abc"));
	printf("%i\n", ft_str_is_uppercase(""));
	return(0);
}*/