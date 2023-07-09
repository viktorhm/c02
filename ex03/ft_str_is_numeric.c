/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 11:37:07 by vharatyk          #+#    #+#             */
/*   Updated: 2023/07/09 11:57:28 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int		i;
	char	car;

	i = 0 ;
	if (*(str + i) == '\0')
	{
		return (1);
	}
	while (*(str + i) != '\0')
	{
		car = *(str + i);
		if (car >= 48 && car <= 57)
		{
			return (1);
		}
		else
		{
			i++;
		}	
	}
	return (0);
}
/*
int main (void){
char	test[]=":?><";
int	value = 50 ;
value = ft_str_is_numeric(test);
printf("%d",value);

}*/
