/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboilo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 21:47:25 by oboilo            #+#    #+#             */
/*   Updated: 2024/10/09 21:48:58 by oboilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *varA, int *varB)
{
	int	temp;

	temp = *varA;
	*varA = *varB;
	*varB = temp;
}
/*
int	main(void)
{
    int varA;
    int varB;
    
    varA = 10;
    varB = 20;
    
    int *ptrA;
    int *ptrB;
    
    ptrA = &varA;
    ptrB = &varB;
    
    
    printf("Before - A: %d, B: %d; \n", *ptrA, *ptrB);
	ft_swap(ptrA, ptrB);
    printf("After - A: %d, B: %d; \n", *ptrA, *ptrB);
	return (0);
}*/
