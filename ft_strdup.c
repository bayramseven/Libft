/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 02:54:11 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/02/13 22:29:57 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	len;

	// 1. Ölçüm: Sadece yazının uzunluğunu al (Netlik için)
	len = ft_strlen(src);

	// 2. Talep: (Uzunluk + 1) kadar yer ayır.
	// sizeof(char) ekledik ki "byte hesabı yapıyorum" mesajı verelim.
	dest = (char *)malloc(sizeof(char) * (len + 1));

	// 3. Güvenlik: Yer yoksa NULL dön.
	if (!dest)
		return (NULL);

	// 4. Kopyalama: ft_strlcpy kullanıyoruz.
	// DİKKAT: strlcpy bizden "Toplam Buffer Boyutunu" (len + 1) ister.
	ft_strlcpy(dest, src, len + 1);

	// 5. Teslimat
	return (dest);
}

int main()
{
    const char *srrc = "bayram";
    char *kopya;
    
    // (Malloc içeride çalıştı)
    kopya = ft_strdup(srrc);

    // 2. TEMİZLİK (Olmazsa olmaz!)
    if (kopya) // Güvenlik kontrolü: Boş değilse sil   // UNUTMA!!
        free(kopya);

    return (0);
}