/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayseven <bayseven@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 02:36:53 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/02/18 20:32:21 by bayseven         ###   ########.fr       */
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
	// Eğer RAM bize yer vermediyse (!ptr),
	if (!ptr)
		return (0);
	// 4. Arsa başarıyla alındıysa, içini sıfırlarla temizle.
	ft_bzero(ptr, total);
	// 5. Temiz arsanın adresini teslim et.
	return (ptr);
}
