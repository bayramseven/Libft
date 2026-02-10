/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 04:12:37 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/02/10 15:57:08 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	// 1. Gelen void adresi, işlem yapabilmek için unsigned char'a çeviriyoruz.
	ptr = (unsigned char *)b;
	
	// 2. Ekstra bir sayaç (i) kullanmak yerine, len bitene kadar geri sayıyoruz.
	while (len > 0 && len !='\0')
	{
		*ptr = (unsigned char)c; // O anki kutuyu boya
		ptr++;                   // Bir sonraki kutuya geç
		len--;                   // Boyanacak miktar azaldı
	}
	// 3. Orijinal başlangıç adresini (b) döndür.
	return (b);
}


int main(void)
{
    char b[] = "Bayram";
    // "Bayram" kelimesinin ilk 3 harfini 'X' yap ve hemen yazdır. 
    printf("%s\n", (char *)ft_memset(b, 'X', 10)); // değişkenden fazla len verirsen fazla yer boyar segemnt hatası verir.
    return (0);
}