/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 08:53:47 by vharatyk          #+#    #+#             */
/*   Updated: 2023/07/08 14:59:58 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
	{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include<unistd.h>
#include<stdio.h>
#include<string.h>
int main (void)
{
char tws[]="bon";
char test[]="heycia";
printf("%s\n",strcpy(tws,test));

char test2[]="bon";
char test1[]="heycia";
printf("%s",ft_strcpy(test2,test1));
}*/
