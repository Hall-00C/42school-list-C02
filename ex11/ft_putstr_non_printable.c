/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpena <gpena@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:58:57 by gpena             #+#    #+#             */
/*   Updated: 2025/06/19 15:59:03 by gpena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	temp;
	unsigned char	*str_value;
	char			*hex_symbol;

	hex_symbol = "0123456789abcdef";
	str_value = (unsigned char *)str;
	while (*str_value != '\0')
	{
		if (*str_value >= 32 && *str_value <= 126)
		{
			write(1, str_value, 1);
		}
		else
		{
			ft_putchar('\\');
			temp = *str_value / 16;
			ft_putchar(hex_symbol[temp]);
			temp = *str_value % 16;
			ft_putchar(hex_symbol[temp]);
		}
		str_value++;
	}
}
