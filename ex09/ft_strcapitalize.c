/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpena <gpena@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:57:12 by gpena             #+#    #+#             */
/*   Updated: 2025/06/19 15:57:23 by gpena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		to_up;

	i = 0;
	to_up = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (to_up && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (!to_up && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			to_up = 0;
		}
		else
			to_up = 1;
		i++;
	}
	return (str);
}
