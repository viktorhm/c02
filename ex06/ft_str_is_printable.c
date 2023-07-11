/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:01:05 by vharatyk          #+#    #+#             */
/*   Updated: 2023/07/09 15:10:53 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		i;

	i = 0 ;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <unistd.h>
#include <stdio.h>
int main (void){
char	test[]=" ";
int	value = 50 ;
value = ft_str_is_printable(test);
printf("%d",value);
}*/
