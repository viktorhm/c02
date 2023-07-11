/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 08:57:22 by vharatyk          #+#    #+#             */
/*   Updated: 2023/07/09 11:36:03 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
	{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include<unistd.h>
#include<stdio.h>
int main (void){
char	test[]="test";
int	value = 50 ;
value = ft_str_is_alpha(test);
printf("%d",value);
}*/
