/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:52:40 by vharatyk          #+#    #+#             */
/*   Updated: 2023/07/09 18:07:38 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	test(char str)
	{
	int	result;

	if (str > 96 && str < 123)
	{
		result = 0;
	}
	else if (str > 47 && str < 58)
	{
		result = 1;
	}
	else if (str > 64 && str < 91)
	{
		result = 2;
	}
	else
	{	
		result = 3;
	}
	return (result);
}

char	*ft_strcapitalize(char *str)
{
	while (*str != '\0')
	{
		if (test(*str) != 3)
		{
			if (test(*str) == 0)
			{	
				*str -= 32;
			}
			*str += 1;
			while (test(*str) != 3)
			{
				printf("d");
				if (test (*str) == 2)
				{
					*str += 32;
				}
				*str += 1;
			}
		}
		*str += 1 ;
	}
	return (str);
}
/*
#include<stdio.h>
int main (void){
printf("test");
char	test[]="je pense Que LA VIe doit ETRE $& 455";
printf("%s", ft_strcapitalize(test));
}*/
