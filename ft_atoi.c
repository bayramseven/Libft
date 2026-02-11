/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 22:59:53 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/02/11 02:09:32 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;  // Result (Sonuç)
	int	sign; // Sign (İşaret)
	int	i;    // Index (Gezici)

	res = 0;
	sign = 1;
	i = 0;
	
	// 1. ADIM: Boşlukları (Whitespace) Atla
	// 9-13 arası ASCII kodları: \t, \n, \v, \f, \r
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;

	// 2. ADIM: İşareti (Sign) Al (Sadece 1 tane olabilir)
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1; // Eksi gördüysek işareti -1 yap
		i++;           // İşareti geçip sayıya gel
	}

	// 3. ADIM: Rakamları Sayıya Çevir (Karakter bitene kadar)
	while (str[i] >= '0' && str[i] <= '9')
	{
		// Önceki sonucu 10 ile çarp, yeni rakamı ekle.
		res = (res * 10) + (str[i] - '0');
		i++;
	}

	// Sonucu işaretiyle çarp ve döndür
	return (res * sign);
}