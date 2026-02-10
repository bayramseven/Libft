/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bayram-seven <bayram-seven@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 09:02:09 by bayram-seve       #+#    #+#             */
/*   Updated: 2026/02/10 09:48:09 by bayram-seve      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	// (man strnstr böyle istiyor) // KURAL 1: Eğer aranacak kelime (needle) boşsa, haystack'i geri ver.
	if (*needle == '\0')
		return ((char *)haystack);

	i = 0;
	// Dış döngü: Haystack bitene kadar VE i < len olduğu sürece dön
	while (haystack[i] !='\0' && i < len)
	{
		j = 0;
		// İç döngü:
		// 1. Harfler eşleşiyor mu?
		// 2. Limit (len) aşıldı mı? (i + j < len)
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			// Eğer needle'ın sonuna geldiysek, bulduk demektir!
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (0);
}

int main()
{

    char *sonuc = ft_strnstr("bayram", "bayram", 3);

    
    if (sonuc == NULL)
	{
		printf(", Sonuç: NULL (Bulunamadı - )\n");
	}
    printf("sonuc = %s\n", sonuc);
    return(0);
}