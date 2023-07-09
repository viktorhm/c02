/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:14:09 by vharatyk          #+#    #+#             */
/*   Updated: 2023/07/09 15:36:11 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		i;
	char	car;

	i = 0 ;
	while (*(str + i) != '\0')
	{
		car = *(str + i);
		if (car >= 97 && car <= 122)
		{
			str[i] = str[i] - 32;
		}
		else
		{
			i++;
		}
	}
	return (0);
}
/*
#include<stdio.h>
#include<unistd.h>

int main (void){
char	test[]="aqaq65^#";
ft_strupcase(test);
printf("%s",test);

}*/
