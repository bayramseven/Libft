/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 19:22:22 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/02/10 22:54:14 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr; // Gezici pointer
	unsigned char	ch;   // Aranan harf (byte)
	size_t			i;

	// 1. Casting (Gözlükleri takalım)
	// Gelen 's' void olduğu için boyutu yok. Onu byte byte okumak için çeviriyoruz.
	ptr = (unsigned char *)s;
	
	// 2. Aranan karakteri (int) unsigned char yapıyoruz.
	// Çünkü int 4 byte, biz sadece son 1 byte'ına bakacağız.
	ch = (unsigned char)c;

	i = 0;
	while (i < n)
	{
		// 3. Eşleşme var mı?
		if (ptr[i] == ch)
		{
			// Bulduğumuz kutunun (byte'ın) ADRESİNİ döndür.
			// (void *) casting'i, fonksiyonun dönüş tipi void* olduğu için.
			return ((void *)&ptr[i]);
		}
		i++;
	}
	return (0);
}