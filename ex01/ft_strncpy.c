/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharatyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 09:35:53 by vharatyk          #+#    #+#             */
/*   Updated: 2023/07/08 16:13:16 by vharatyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>

char *ft_strncpy(char *dest, const char *src, unsigned int  n)
{
	unsigned int	i;
	i = 0; 
	while ( *(src + i) != '\0' && i<n )
		{
		*(dest+i) = *(src+i);
		i++;
	}
	while( i < n)
		{
		*(dest +i) = '\0';
		i++;
        }
	return( dest) ;
}

int main (void){
char	chaine1[]="                   ";
char	*chaine2;
int	size;
chaine2 = "salut a tous";
size = 10 ;
printf("%s \n",ft_strncpy(chaine1,chaine2,size));
printf("%s",strncpy(chaine1,chaine2,size));
return 0 ;
}
