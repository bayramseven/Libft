/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 02:54:11 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/02/11 03:09:40 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup; // Duplicate (Kopya) kelimesinin kısaltması
	size_t	len;

	// 1. Ölçüm yapıyoruz
	len = ft_strlen(s1);

	// 2. RAM'den yer istiyoruz. (sizeof detayı hayat kurtarır!)
	dup = (char *)malloc(sizeof(char) * (len + 1));

	// 3. Güvenlik (Fail-Fast): Eğer RAM yer vermediyse direkt çık.
	if (!dup)
		return (0);

	// 4. Taşıma: Kendi yazdığımız fonksiyonu kullanarak kopyalıyoruz.
	ft_memcpy(dup, s1, len + 1);

	// 5. Yeni klonun adresini teslim ediyoruz.
	return (dup);
}