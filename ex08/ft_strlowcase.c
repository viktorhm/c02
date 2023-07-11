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

	i = 0 ;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
#include<stdio.h>
#include<unistd.h>

int main (void){

char	test[]="QAFFw65^#";
printf("%s",test);
ft_strlowcase(test);
printf("%s",test);
}*/
