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

int	ft_str_is_lowercase(char *str)
	{
	int		i;
	char	car;

	i = 0 ;
	while (*(str + i) != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main (void){
char	test[]="0";
int	value = 50 ;
value = ft_str_is_lowercase(test);
printf("%d",value);
}*/
