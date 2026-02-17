/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 03:07:29 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/02/17 03:11:20 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	// 1. GÜVENLİK KONTROLÜ
	// Eğer s (string) veya f (fonksiyon) yoksa işlem yapma.
	if (!s || !f)
		return (NULL);

	// 2. HAFIZA AYIRMA (MALLOC)
	// Yeni bir string oluşturacağımız için yer açıyoruz.
	// sizeof(char) eklemek "taşınabilirlik" açısından profesyoneldir.
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);

	// 3. DÖNGÜ VE İŞLEM
	i = 0;
	while (s[i])
	{
		// Fonksiyonu çalıştır, sonucu yeni stringe (str) yaz.
		str[i] = f(i, s[i]);
		i++;
	}
	// 4. KAPANIŞ
	str[i] = '\0'; // Stringi mühürle.
	return (str);
}