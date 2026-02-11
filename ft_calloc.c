/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 02:36:53 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/02/11 03:09:54 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total;

	// 1. Optimizasyon: Çarpma işlemini SADECE BİR KERE yapıyoruz.
	total = count * size;

	// 2. RAM'de    n yer istiyoruz.
	ptr = malloc(total);

	// 3. Fail-Fast (Hızlı Hata) Koruması:
	// Eğer RAM bize yer vermediyse (!ptr), kodu uzatmadan hemen 0 dönüp çıkıyoruz.
	if (!ptr)
		return (0);

	// 4. Arsa başarıyla alındıysa, içini sıfırlarla temizle.
	ft_bzero(ptr, total);

	// 5. Temiz arsanın adresini teslim et.
	return (ptr);
}