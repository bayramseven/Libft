/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayseven <bayseven@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 04:12:37 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/02/11 21:13:19 by bayseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	// 1. Gelen void adresi, işlem yapabilmek için unsigned char'a çeviriyoruz.
	ptr = (unsigned char *)b;
	// 2. Ekstra bir sayaç (i) kullanmak yerine len bitene kadar geri sayıyoruz.
	while (len > 0 && len != '\0')
	{
		*ptr = (unsigned char)c; // O anki kutuyu boya
		ptr++;                   // Bir sonraki kutuya geç
		len--;                   // Boyanacak miktar azaldı
	}
	// 3. Orijinal başlangıç adresini (b) döndür.
	return (b);
}

int	main(void)
{
	char str[] = "faruk"; 
	//int str_[5] = {-255, 20, 30, 41, -255};

	ft_memset(str, 'o', 5);
	ft_memset(str, 's', 4);
	ft_memset(str, 'm', 3);
	ft_memset(str, 'a', 2);
	ft_memset(str, 'n', 1);
	
	printf("%s", str);
	// değişkenden fazla len verirsen fazla yer boyar segemnt hatası verir.
	return (0);
}