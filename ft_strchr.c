/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 20:56:23 by bayseven          #+#    #+#             */
/*   Updated: 2026/02/14 10:17:31 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c) // c aslında int , ama bu şekilde yalnızca binary de ilk 8 bitine bakıyor ve karşılaştırmayı tam yapabiliyor. chara dönüştürüyo gibi düşün
			return ((char *)s); // const muhabbetini manipüle
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s); 
	return (0);
}
	/*
#include <stdio.h>

int	main(void)
{
printf("Sonuç: %s", ft_strchr("bayram", 'a'));

	return (0);
}
	*/