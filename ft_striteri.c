/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 10:59:33 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/02/14 11:16:01 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	// 1. GÜVENLİK KONTROLÜ
	// Bu, programın çökmesini (Segmentation Fault) önler.
	if (!s || !f)
		return ;

	// 2. SAYACIN BAŞLATILMASI
	i = 0;

	// 3. DÖNGÜ (STRING TARAMA)
	// s[i] mevcut olduğu sürece (yani NULL terminatöre gelene kadar) devam et.
	while (s[i])
	{
		// 4. FONKSİYON ÇAĞRISI (EN KRİTİK NOKTA)
		// (*f) -> Gönderilen fonksiyonu çalıştırıyoruz.
		// i -> Karakterin indeksini gönderiyoruz.
		// &s[i] -> Karakterin hafızadaki ADRESİNİ gönderiyoruz.
		// Adres gönderdiğimiz için f fonksiyonu karakteri kalıcı olarak değiştirebilir.
		(*f)(i, &s[i]);

		// 5. İLERLEME
		// Bir sonraki karaktere geçmek için indeksi artır.
		i++;
	}
}