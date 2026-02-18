/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 21:27:16 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/02/18 04:44:14 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;

	// 1. Güvenlik: String yoksa işlem yapma.
	if (!s)
		return (NULL);

	s_len = ft_strlen(s);

	// 2. Senaryo: Başlangıç noktası stringin boyundan büyükse?
	// Örnek: "Ali" (3 harf) ama sen 5. harften başla dedin.
	// Sonuç: Boş bir string döndürülür.
	if (start >= s_len)
	{
		substr = (char *)malloc(1); // Sadece \0 için 1 byte
		if (!substr)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}

	// 3. Maliyet Hesabı (RAM Tasarrufu):
	// İstenen uzunluk (len), geriye kalan harflerden fazlaysa kırpıyoruz.
	if (len > s_len - start)
		len = s_len - start;

	// 4. Kiralama ve Kopyalama
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	
	// s + start formülüyle adresi kaydırıp kopyalıyoruz.
	ft_strlcpy(substr, s + start, len + 1);

	return (substr);
}

/*

int main(void)
{
    // "Bayram" kelimesinin 3. harfinden başla, 3 tane al ("ram")
    char *str = ft_substr("Bayram", 3, 3);

    if (str)
    {
        printf("%s\n", str); // Çıktı: ram
        free(str);           // İş bitti, iade et.
    }
    return (0);
}
	*/