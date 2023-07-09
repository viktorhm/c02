/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 11:58:38 by vharatyk          #+#    #+#             */
/*   Updated: 2023/07/09 12:18:13 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
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
		if (car >= 97 && car <= 122)
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
char	test[]="";
int	value = 50 ;
value = ft_str_is_lowercase(test);
printf("%d",value);

}*/
