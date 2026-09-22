/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicsanch <vicsanch@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 14:40:06 by vicsanch          #+#    #+#             */
/*   Updated: 2026/09/22 15:20:04 by vicsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int ab)
{
	int	i;
	int	result;

	if (ab == 0)
		return (1);
	if (ab < 0)
		return (0);
	i = 1;
	result = 1;
	while (i <= ab)
	{
		result *= i;
		i++;
	}
	return (result);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d\n", ft_iterative_factorial(atoi(argv[1])));
	}
}
	*/
