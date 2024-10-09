/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboilo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:43:36 by oboilo            #+#    #+#             */
/*   Updated: 2024/10/09 18:43:42 by oboilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int	main(void)
{
	int var;
	var = 20;
	printf("Value of var before: %d\n", var);
	
	int *ptr;
	ptr = &var; // the same as -- int * ptr = &var;

    
	//*ptr = 12;

	ft_ft(ptr);
	printf("Value of var: %d\n", var);
	printf("Value through pointer: %d\n", *ptr);

	return 0;
}*/
