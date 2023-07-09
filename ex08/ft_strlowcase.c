/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:38:45 by vharatyk          #+#    #+#             */
/*   Updated: 2023/07/09 15:48:49 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		i;
	char	car;

	i = 0 ;
	while (*(str + i) != '\0')
	{
		car = *(str + i);
		if (car >= 65 && car <= 90)
		{
			str[i] = str[i] + 32;
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
char	test[]="QAFFw65^#";
ft_strlowcase(test);
printf("%s",test);

}*/
