/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 22:31:08 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/02/13 23:41:21 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len1;
	size_t	len2;

	// 1. GÜVENLİK
	if (!s1 || !s2)
		return (NULL);

	// 2. ÖLÇÜM
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);

	// 3. KİRALAMA (MALLOC)
	str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!str)
		return (NULL);

	// 4. BİRLEŞTİRME (MEMCPY)
	ft_memcpy(str, s1, len1);
	ft_memcpy(str + len1, s2, len2 + 1);

	return (str);
}

int main(void)
{
	char	*s1 = "Ali";
	char	*s2 = "Veli";
	char	*res;

	// Birleştirme işlemi
	res = ft_strjoin(s1, s2);
	if (res)
	{
		printf("Sonuc: %s\n", res); // Beklenen: AliVeli
		free(res); // Bellek sızıntısını önle
	}
	return (0);
}
