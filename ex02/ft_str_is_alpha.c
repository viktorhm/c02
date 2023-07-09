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
#include<unistd.h>
#include<stdio.h>

int	ft_str_is_alpha(char *str)
	{
	int		i;
	char	car;

	i = 0;
	while (*(str + i) != '\0')
	{
		car = *(str + i);
		if ((car >= 65 && car <= 90) || (car >= 97 && car <= 122))
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
char	test[]="12345679qweds";
int	value = 50 ;
value = ft_str_is_alpha(test);
printf("%d",value);

}*/
