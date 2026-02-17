/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 10:59:33 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/02/17 03:04:51 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;

	i = 0;

	while (s[i])
	{
		
		(*f)(i, &s[i]);

		i++;
	}
}


#include <stdio.h>

void buyuk(unsigned int i,char *s)
{
	*s-= 32;
	i++;
}

int	main(void)
{
	
	char b[]= "merhaba";

	ft_striteri(b, buyuk);
	printf("%s", b);
	return (0);
}