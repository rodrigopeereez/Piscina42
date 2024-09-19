/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodperez <rodperez@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:31:46 by rodperez          #+#    #+#             */
/*   Updated: 2024/08/12 13:42:06 by rodperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_reverse_alphabet(void)
{
	char	cba;

	cba = 'z';
	while (cba >= 'a')
	{
		write(1, &cba, 1);
		cba --;
	}
}

/*int main(void)
{
	ft_print_reverse_alphabet();
	return 0;
}*/
