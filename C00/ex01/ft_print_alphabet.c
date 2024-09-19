/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodperez <rodperez@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:06:03 by rodperez          #+#    #+#             */
/*   Updated: 2024/08/12 13:41:38 by rodperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	abc;

	abc = 'a';
	while (abc <= 'z')
	{
		write(1, &abc, 1);
		abc ++;
	}
}
/*
int main(void)
{
	ft_print_alphabet();
	return 0;
}
*/
