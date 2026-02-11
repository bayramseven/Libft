/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 22:54:33 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/02/11 01:59:20 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	// 1. Gözlükleri Takıyoruz (Casting)
	// Void pointer'ları byte-byte okumak için unsigned char'a çeviriyoruz.
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	
	i = 0;
	// 2. 'n' byte kadar dön
	while (i < n)
	{
		// 3. Farklılık gördüğün an DUR!
		if (str1[i] != str2[i])
		{
			// Aralarındaki matematiksel farkı döndür (Standart kural)
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}

int main()
{
	char bay[]="bayram";
	char sum[]="Bayram";

	printf("%d\n",ft_memcmp(bay,sum,5));
	return(0);
}
