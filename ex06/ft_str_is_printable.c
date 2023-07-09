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
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
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
		if (car >= 33 && car <= 126)
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
char	test[]="edeHF";
int	value = 50 ;
value = ft_str_is_printable(test);
printf("%d",value);
}*/
