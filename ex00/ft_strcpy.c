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
#include<unistd.h>
#include<stdio.h>
#include<string.h>

char	*ft_strncpy(char *dest, char *src)
	{
	int i;
	i = 0; 
	while(src[i] != '\0')
	{ 
		dest[i]=src[i];
		i++;
	}
	dest[i]='\0';
	return (dest);
}

int main (void)
{
char tws[]="bonjours";
char test[]="hey";


printf("%s\n",strncpy(tws,test,5));
printf("%s",ft_strncpy(tws,test));
}

