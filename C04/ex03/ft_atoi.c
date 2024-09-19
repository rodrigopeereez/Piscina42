/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:45:31 by rodperez          #+#    #+#             */
/*   Updated: 2024/08/28 17:11:12 by rodperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int		result;
	int		sign;
	int		sign_count;

	result = 0;
	sign_count = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\r'
		|| *str == '\v' || *str == '\f' || *str == '\n')
		str ++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str ++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str ++;
	}
	return (result * sign);
}
/*
int main()
{
	char str[] = "---1234ab567";
	int		val;

	val = ft_atoi(str);
	printf("%d", val);
	return (0);
}*/
